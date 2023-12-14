# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <wait.h>
# include <fcntl.h>
# include <signal.h>

int main(){
    pid_t idProc;
    int rapport, numSignal, statut, envoiSig;
    
    idProc = fork();
    switch(idProc){
        case -1:
            perror("Echec processus !");
            exit(1);
        case 0:
            envoiSig = sigsend(idProc, idProc, 30);
            while(envoiSig = -1){
                printf("je suis PID = %d, j'attend SIGUSR1 \n", getpid());
            }
            printf("\n***fils1 --> PID= %d\n", getpid());
            exit(1);
    }
}