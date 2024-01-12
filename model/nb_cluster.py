import pandas as pd
from kmean import Model
import matplotlib.pyplot as plt

kmean = Model()

# Afficher le nombre optimal de clusters (coud du coude)
inerties = []
for i in range(1, 11):
    kmean.classification(i)
    inerties.append({'Clusters': i, 'Inertie': kmean.getInertie()})

df = pd.DataFrame(inerties)
plt.plot(df['Clusters'], df['Inertie'], marker='o')
plt.title('Méthode du coude')
plt.xlabel('Nombre de clusters')
plt.ylabel('Inertie')
plt.show()