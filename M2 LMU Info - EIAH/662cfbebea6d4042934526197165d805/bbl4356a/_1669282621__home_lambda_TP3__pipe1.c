
int main(int argc, char const *argv[]){
     pid_t idProc ;
     
     err
     
    idProc = fork() ;
    switch (idProc ) {
        case -1 : 
            perror("echec fork") ;
            exit(1) ;
        case 0 :
            traiterEnfant(descFic[0]) ;
            exit(0) ;
    }
    
    scanf(tampon);
    printf("lu au clavier %s \n",tampon);
    write(desFic[1],tampon,strlen(tampon));

}

void traiterEnfant(int tube) {
    
}