import pandas as pd
from pandas import json_normalize
from datetime import datetime
import json
import numpy as np
import re


def nb_traces(username, array):
    res = 0
    for element in array:
        if element['username'] == username:
            res+=1
    return res


def nb_suppr(username, array):
    res = 0
    for element in array:
        if element['username'] == username:
            changes_part = element.get('changes', [])
            for change in changes_part:
                if change['change']['action'] == "remove":
                    res += 1
    return res

def tmp_moy_2_traces(username, array):
    temps_tot = 0
    nb_traces = 0 #on peut laisser 0 car si le user est parcouru, alors il a forcement une trace, donc jamais de division par 0
    time_stamp_courant = None
    time_stamp_prec = None
    is_set_ts = False
    for element in array:
        if element['username'] == username:
            time_stamp_courant = datetime.strptime(element['timestamp'], "%Y-%m-%dT%H:%M:%S.%fZ")
            nb_traces+=1

            if is_set_ts:
                difference = time_stamp_courant-time_stamp_prec
                temps_tot += difference.total_seconds()
                time_stamp_prec = time_stamp_courant
            else:
                is_set_ts = True
                time_stamp_prec = time_stamp_courant

    return temps_tot/nb_traces

def nb_copy_paste(username, array):
    res = 0
    for element in array:
        if element['username'] == username:
            changes_part = element.get('changes', [])
            for change in changes_part:
                if change['change']['action'] == "insert":
                    insertion = change['change'].get('lines', [])
                    if len(insertion) > 1:
                        res+=1
                    else:
                        if len(insertion[0]) > 2:
                            res +=1
    return res


def nb_gcc_error(username, array):
    nb_error = 0
    nb_gcc = 0
    res = 0
    for element in array:
        if element['username'] == username:
            action = element.get('command')
            if action == 'gcc':
                nb_gcc += 1
                if element.get('response') != "":
                    nb_error += 1

    if nb_gcc != 0:
        res = nb_error/nb_gcc

    return res


def quantite_texte(username, array):
    res = 0
    cpt = 0
    for element in array:
        if element['username'] == username:
            changes_part = element.get('changes', [])
            for change in changes_part:
                if change['change']['action'] == "insert":
                    insertion = change['change'].get('lines', [])                    
                    res += len(insertion)
                    cpt += 1
                    
    if(cpt != 0):
        res = res/cpt

    return res



def nb_save(username, array):
    save = 0
    for element in array:
        if element['username'] == username and element['action'] == "saveFile":
            save += 1
    return save



instruction_json = "../data/instructions.json"
vm_interaction_json = "../data/vmInteractions.json"

regex_username = ".*[0-9].*"

with open(vm_interaction_json, 'r') as fichier:
    vm_interaction = json.load(fichier)

with open(instruction_json, 'r') as fichier:
    instructions = json.load(fichier)
    
numpy_array = np.array(vm_interaction)

numpy_array = list(filter(lambda username: re.search(regex_username, username['username']), numpy_array))

unique_usernames = set()

# Parcourir les entrées et ajouter les usernames à l'ensemble
for entry in numpy_array:
    username = entry.get('username')
    if username:
        unique_usernames.add(username)

donnees_traite = np.array(list(unique_usernames))

df = pd.DataFrame(donnees_traite, columns=['username'])

#for name in unique_usernames:
#    nb = nb_copy_paste(name, numpy_array)
#    print(nb)

df['nb_traces'] = df['username'].apply(lambda name: nb_traces(name, vm_interaction))
df['nb_remove'] = df['username'].apply(lambda name: nb_suppr(name, vm_interaction))
df['tmp_moy'] = df['username'].apply(lambda name: tmp_moy_2_traces(name, vm_interaction))
df['cp_pst'] = df['username'].apply(lambda name: nb_copy_paste(name, vm_interaction))
df['nb_gcc_error'] = df['username'].apply(lambda name: nb_gcc_error(name, instructions))
df['quantite'] = df['username'].apply(lambda name: quantite_texte(name, vm_interaction))
df['save'] = df['username'].apply(lambda name: nb_save(name, vm_interaction))

print(df)


