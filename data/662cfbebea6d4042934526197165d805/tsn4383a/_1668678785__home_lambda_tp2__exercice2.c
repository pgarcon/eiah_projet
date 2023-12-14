#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int main (int argc, char const *argv[]){
    
    int nbfils;
    int cpt;
    
    nbfils = argv[1];
    cpt = nbfils;
    for (int i = 0; i < nbfils; i++){
        
    }    
    
}

void traiterSigChild(int sig){
    cpt = cpt - 1;   
}