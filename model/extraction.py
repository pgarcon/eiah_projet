import pandas as pd
from pandas import json_normalize
import json
import numpy as np
import re



def nb_suppr(username, array):
    res = 0
    for element in array:
        if element['username'] == username:
            changes_part = element.get('changes', [])
            for change in changes_part:
                if change['change']['action'] == "remove":
                    res += 1
    return res




instruction_json = "../data/instructions.json"
vm_interaction_json = "../data/vmInteractions.json"

regex_username = ".*[0-9].*"

with open(vm_interaction_json, 'r') as fichier:
    vm_interaction = json.load(fichier)

#df_instructions['username'] = df_instructions['username'].str.strip()

#df_instructions_filtre = df_instructions[df_instructions['username'].str.contains(regex_username)]
#df_vmInteractions_filtre = df_vmInteractions[df_vmInteractions['username'].str.contains(regex_username)]


#df_traite = df_instructions_filtre.drop_duplicates(subset='username')[['username']]
#df_traite = df_traite.reset_index(drop=True)

#df_traite['nb_remove'] = df_traite.apply(lambda row: nb_suppr(row['username'], df_vmInteractions_filtre), axis=1)
    
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
print(df)

for name in unique_usernames:
    nb = nb_suppr(name, numpy_array)
    print(nb)

df['nb_remove'] = df['username'].apply(lambda name: nb_suppr(name, vm_interaction))

print(df)


