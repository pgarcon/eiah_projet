import pandas as pd
from sklearn.cluster import KMeans
from sklearn.neighbors import NearestNeighbors
from sklearn.preprocessing import StandardScaler

class Model:
    def __init__(self):
        #On récupère les données
        self.data = pd.read_csv("indicateurs.csv")

        # Les colonnes que l'on utilise
        self.donnee = self.data[['nb_traces', 'nb_remove', 'tmp_moy', 'cp_pst', 'quantite', 'nb_gcc_error']]

        # Normalisation des données
        self.scaler = StandardScaler()
        self.donnee_scale = self.scaler.fit_transform(self.donnee)

        self.model = None


    def classification(self, i=2):
        self.model = KMeans(n_clusters=i)
        self.model.fit(self.donnee_scale)

    def getInertie(self):
        return self.model.inertia_
    

    def predict(self):
        return self.model.fit_predict(self.donnee_scale)
    


    def weight_feature(self):
        cluster_centers = self.model.cluster_centers_

        # Afficher les poids attribués à chaque feature pour chaque cluster
        for i, center in enumerate(cluster_centers):
            print(f"\nCluster {i + 1} Center:")
            for feature_name, weight in zip(self.donnee.columns, center):
                print(f"{feature_name}: {weight}")