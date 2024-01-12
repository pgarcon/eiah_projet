import os
import pandas as pd
from kmean import Model
from sklearn.cluster import KMeans
from sklearn.neighbors import NearestNeighbors
from sklearn.preprocessing import StandardScaler
import matplotlib.pyplot as plt

nb_cluster = 4
kmean = Model()
kmean.classification(nb_cluster)

#On récupère les données
data = pd.read_csv("indicateurs.csv")

# Créer un dossier pour stocker les fichiers cluster
output_folder = "resultats"
os.makedirs(output_folder, exist_ok=True)

# Remettre à zéro l'index
data.reset_index(drop=True, inplace=True)

data['cluster'] = kmean.predict()

# Sauvegarder chaque cluster dans un fichier CSV
for cluster_id in range(nb_cluster):
    cluster_data = data[data['cluster'] == cluster_id]
    #cluster_data.drop('cluster', axis=1, inplace=True)
    cluster_file_path = os.path.join(output_folder, f"cluster_{cluster_id + 1}_data.csv")
    cluster_data.to_csv(cluster_file_path, index=False)

kmean.weight_feature()