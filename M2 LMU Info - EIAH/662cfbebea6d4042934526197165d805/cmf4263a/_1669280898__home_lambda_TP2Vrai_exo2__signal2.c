#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void traiterSIGCHLD(int idSig);

void main(int argc, char* argv[]) {
    srand(50);
    pid_t idProc;
    int err;
    struct sigaction sa;
    memset (&sa, 0, sizeof (sa));
    sa.sa_handler = (void *) traiterSIGCHLD;
    err = sigaction (SIGCHLD, &sa, NULL);

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
    
    int rapport;
    int cmp = (int)*argv[1] - 48;
    idProc = wait(&rapport);
    while (idProc !=-1 || cmp !=0) {
        idProc = wait(&rapport);
        cmp--;
    }
    
    
    
}

void traiterSIGCHLD(int idSig) {
    if (idSig != SIGCHLD) {
        perror("signal ne correspond pas");
    } else {
        int rapport, pid;
        pid = wait(&rapport);
        printf("PID : %d\n",pid;
        printf("Numero de signal recu : %d\n",idSig);
    }
}