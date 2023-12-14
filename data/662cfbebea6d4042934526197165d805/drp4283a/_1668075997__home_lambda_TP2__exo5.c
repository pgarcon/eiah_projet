int main(int nbParam, char* param[]){
    int nbrFicY = 0; // nbr de fichier ou la string apparait
    int nbrFicN = 0; // nbr de fichier ou la string pas
    int nbrFicF = 0; // nbr de fichier inacessible
    
    char* str = param[1];
    
    for(int i=2; param[i] != NULL; i++){
        idProc = fork();
        if(idProc = 0){
            chercherString(str,param[i]);
        } else {
            perror("echec creation fils %d",i);
        }
    }
    
    int idProc, rapport;
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
    FILE* fichier;
    fichier = fopen("fic","r");
}