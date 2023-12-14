#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    pid_t idProc;
    int rapport, numSignal, statut;
    
    idProc = fork();
    switch (idProc){
        case (1):
            perror("echec fork");
            exit(1);
        case 0:
            exit(0);
    }
}