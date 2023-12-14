int main(int argc,char* str,char* argv){
    lancerProcess();
}

int lancerProcess(int nbr){
    for(int i =0; i <= nbr;i++){
        idProc = fork();
        if(idProc = 0){
            chercherString(,);
        } else {
            perror("echec creation fils %d",i);
        }
    }
}

int chercherString(char* str){
    FILE* fichier;
    fichier = fopen("fic","r");
}