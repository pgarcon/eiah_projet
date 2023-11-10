#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
int main(){
    
        int err ;
        struct sigaction sa;
        
        memset (&sa, 0, sizeof (sa));
        sa.sa_handler = (void *) traiterSIGUSR1 ;
        err = sigaction (SIGUSR1, &sa, NULL); 
        if (err == -1) { perror("echec signal"); exit(1); 
    while(1){
        
    }
}