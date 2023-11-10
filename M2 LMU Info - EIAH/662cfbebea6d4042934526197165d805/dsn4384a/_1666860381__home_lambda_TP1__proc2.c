#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

int main() {
    
    pid_t  idProc ;
    int  rapport, numSignal, statut;
    time_t bonjour = time(NULL);

    printf("\nJe suis : %s et mon UID est :  %d\n",getlogin(),getuid());
    printf("Nous sommes le : %s\n",ctime(&bonjour));
    
    idProc = fork() ;
    switch  (idProc ) {
        case -1 : perror("echec fork"); exit(1);   /* erreur */
        case 0 :  execl(); exit(1) ;
    }
    
    /*idProc = fork() ;
    switch  (idProc ) {
        case -1 : perror("echec fork"); exit(1);
        case 0 :  execvp(); exit(1) ;
    }*/
    
    
    
}