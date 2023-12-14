int main(){
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

int chercherString(char * str,char * fic){
    
}