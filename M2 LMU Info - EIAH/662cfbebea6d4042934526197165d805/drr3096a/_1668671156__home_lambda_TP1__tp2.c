#include <string.h>
#include <signal.h>
#include <sys/types.h>

void traiterSIGUSR1( int ) ;

int main() {
    while (1);
    
    memset (&sa, 0, sizeof (sa));
    sa.sa_sigaction = (void *) traiterSIGUSR1 ;
     err = sigaction (SIGUSR1, &sa, NULL);
     if (err == -1) { perror("echec signal"); exit(1); }
}