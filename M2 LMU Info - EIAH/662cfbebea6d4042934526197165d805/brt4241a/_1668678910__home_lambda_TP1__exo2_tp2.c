#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void traiterFils()
int main(int argc, char const *argv[])
{
    int err;
    struct sigaction sa;
    
    memset (&sa, 0, sizeof (sa));
    sa.sa_sigaction = (void *) traiterUSR1 ;
    err = sigaction (SIGUSR1, &sa, NULL);
    if (err == -1) { perror("Erreur avec sigaction"); exit(1); }
    
    int nbfils = 5;
    for (int i = 0; i<nbfils; i++) {
        
    }
    
    
    return 0;
}