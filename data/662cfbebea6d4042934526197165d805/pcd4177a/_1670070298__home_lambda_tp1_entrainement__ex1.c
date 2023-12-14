#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


uid_t getuid(void);
void traitFils1();
void traitFils2();
void traitFils3();


int main() {
    
    
    time_t t = time(NULL);
    int rapport, numSignal, statut;
    pid_t idProc;
    
    printf("%s\n", ctime(&t));
    printf("UID: %d\n", getuid());
    
    idProc = fork();
    switch(idProc) {
        case -1: 
            perror("echec fork");
            exit(1);
        case 0:
            traitFils1();
            exit(1);
        
    }
    
    idProc = fork();
    switch(idProc) {
        case -1: 
            perror("echec fork");
            exit(1);
        case 0:
            traitFils2();
            exit(1);
        
    }
    
    idProc = fork();
    switch(idProc) {
        case -1: 
            perror("echec fork");
            exit(1);
        case 0:
            traitFils3();
            exit(1);
        
    }
    

    
}

