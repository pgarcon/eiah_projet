#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void traiterSIGCHLD(int idSig);

void main(int argc, char* argv[]) {
    srand(50);
    pid_t idProc;
    int err;
    struct sigaction sa;
    memset (&sa, 0, sizeof (sa));
    sa.sa_handler = (void *) traiterSIGCHLD;
    err = sigaction (SIGUSR1, &sa, NULL);

    for (int i=0; i<(int)*argv[1] - 48; i++) {
        
        idProc = fork();
        switch (idProc) {
        case -1:
            perror("Erreur creation fils");
            exit(1);
        case 0:
            err = execl("./fils","fils",NULL);
            if (err == -1) {
                perror("echec execl");
                exit(2);
            }
        }
        printf("Creation fils done sleeping now\n");
        sleep(rand() % 10);
    }
    
}

void traiterSIGCHLD(int idSig) {
    if (idSig != SIGCHLD) {
        perror("signal ne correspond pas");
    } else {
        printf("PID : %d\n",getpid());
        printf("Numero de signal recu : %d\n",idSig);
        exit(1);
    }
}