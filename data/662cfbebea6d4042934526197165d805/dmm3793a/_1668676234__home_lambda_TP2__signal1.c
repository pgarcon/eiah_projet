#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

void traiterSIGUSR1(int);

int main(){
    int err;
    struct sigaction sa;
    memset(&sa, 0, sizeof(sa));
    while(1){
        sa.sa_sigaction = (void *) traiterSIGUSR1;
        err = sigaction (SIGUSR1, &sa, NULL);
        if(err == -1){ perror("echec signal"); exit(1);}
    }
}
void traiterSIGUSR1(int idSig){
    if(idSig!= SIGUSR1){
        perror("erreur systeme"); 
        exit(2);
    } else{
        printf("PID = %d et numero de signal = %d", getpid(),idSig)
    }
}