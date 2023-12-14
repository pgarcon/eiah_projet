# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <wait.h>
# include <fcntl.h>
# include <signal.h>
# include <procset.h>

void traitFils1(int idSig);

int main(){
    pid_t idProc;
    int rapport, numSignal, statut;
    
    idProc = fork();
    switch(idProc){
        case -1:
            perror("Echec processus !");
            exit(1);
        case 0:
            traitFils1();
            exit(1);
    }
}

void traitFils1(int idSig){
    while(idSig != SIGUSR1){
        printf ("Je suis le processus %d, j'attend SIGUSR1...", getpid());
    }
    
    
}