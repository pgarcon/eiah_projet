import pandas as pd
from sklearn.cluster import KMeans
from sklearn.neighbors import NearestNeighbors
from sklearn.preprocessing import StandardScaler
import matplotlib.pyplot as plt

#On récupère les données
data = pd.read_csv("indicateurs.csv")

# Les colonnes que l'on utilise
donnee = data[['nb_traces', 'nb_remove', 'tmp_moy', 'cp_pst', 'nb_save', 'quantite', 'nb_gcc_error']]

# Normalisation des données
scaler = StandardScaler()
donnee_scale = scaler.fit_transform(donnee)

# Afficher le nombre optimal de clusters (coud du coude)
inerties = []
for i in range(1, 11):
    model = KMeans(n_clusters=i)
    model.fit(donnee_scale)
    inerties.append({'Clusters': i, 'Inertie': model.inertia_})

df = pd.DataFrame(inerties)
plt.plot(df['Clusters'], df['Inertie'], marker='o')
plt.title('Méthode du coude')
plt.xlabel('Nombre de clusters')
plt.ylabel('Inertie')
plt.show()