/* Gestion des processus sous Linux */

/* TDM1 - Exercice 5 */
# include <sys/wait.h>
# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int main(char * chaineARecherche[], int *nbFichiers, char * fichiers[])
{
    if(nbFichiers < 2) {
        printf("Erreurs, nombre de fichiers < 2 ! \n");
    } else {
        printf("%d \n", nbFichiers);
    }
}