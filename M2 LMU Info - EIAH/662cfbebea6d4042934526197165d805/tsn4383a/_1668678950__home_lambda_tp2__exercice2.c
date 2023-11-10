#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int main (int argc, char const *argv[]){
    
    pid_t idProc;
    int nbfils;
    int cpt;
    
    
    nbfils = argv[1];
    cpt = nbfils;
    for (int i = 0; i < nbfils; i++){
        idProc = fork() ;
        switch  (idProc ) {
        case -1 : 
            perror("echec fork"); exit(1); 
        case 0 :  
            traitFils1(); 
            exit(1) ;
        }
    }    
    
}

void traiterSigChild(int sig){
    cpt = cpt - 1;   
}