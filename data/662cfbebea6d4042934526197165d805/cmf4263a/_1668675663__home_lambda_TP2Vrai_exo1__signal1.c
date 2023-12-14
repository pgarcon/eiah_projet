#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void traiterSigurs1(int idSig);

void main(int argc, char* argv[]) {
    
    int err;
    struct sigaction sa;
    memset (&sa, 0, sizeof (sa));
    sa.sa_handler = (void *) traiterSigurs1;
    
    while(1) {
        sigaction (SIGUSR1, &sa, NULL);
    }
}

void traiterSigurs1(int idSig) {
    if (idSig != SIGUSR1) {
        perror("signal ne correspond pas");
    } else {
        printf("PID : %d\n",getpid());
        printf("Numero de signal recu : %d\n",SIGUSR1);
        exit(1);
    }
}