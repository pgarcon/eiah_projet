#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void traiterSIGUSR1(int);

int main() {
    
    int err;
    struct sigaction sa;
    
    memset (&sa, 0, sizeof(sa));
    sa.sa_handler = (void *) traiterSIGUSR1;
    err = sigaction (SIGUSR1, &sa, NULL);
    
    if (err == -1){
        perror("echec signal"); exit(1);
    }
    
    
    while(check){
        if (signal = 12){
            check = false;
            printf("PID = %d\n", getpid());
            printf("Signal = %d\n", signal);
        }
    }
    
}


void traiterSIGUSR1(int idSignal){
    
}