#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main(int nbParam, char* param[]){
    int nbrFicY = 0; // nbr de fichier ou la string apparait
    int nbrFicN = 0; // nbr de fichier ou la string pas
    int nbrFicF = 0; // nbr de fichier inacessible
    
    pid_t idProc;
    int rapport, statut;
    
    
    char* str = param[1];
    
    for(int i=2; param[i] != NULL or i < 10; i++){
        idProc = fork();
        if(idProc = 0){
            chercherString(str,param[i]);
            i++;
        } else {
            perror("echec creation fils");
        }
    }
    
   
    idProc = wait( &rapport ) ;
    while ( idProc != -1 ) {
        printf("\nTerminaison du fils de PID = %d\n", idProc);
        if WIFEXITED(rapport) {
            statut = WEXITSTATUS(rapport) ;
            printf("Fin normale, statut = %d\n", statut);
        } else {
            printf("Fin anormale");
            idProc = wait( &rapport ) ;
        }
    }
}


int chercherString(char* str, char* fic){
    int err;
    err = execl( "/usr/bin/grep", "grep", "-c ", str, "-f ", fic, NULL) ;
    if ( err == -1 )
    {
     perror( "echec exevp" ) ;
     exit(2) ;
    }
    return err;
}