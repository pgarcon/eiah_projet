int main(int nbParam, char* param[]){
    int nbrFicY = 0; // nbr de fichier ou la string apparait
    int nbrFicN = 0; // nbr de fichier ou la string pas
    int nbrFicF = 0; // nbr de fichier inacessible
    
    for(int i=2; param[i] != NULL; i++){
        idProc = fork();
        if(idProc = 0){
            chercherString(str);
        } else {
            perror("echec creation fils %d",i);
        }
    }
}

int lancerProcess(){
    
}

int chercherString(char* str){
    FILE* fichier;
    fichier = fopen("fic","r");
}