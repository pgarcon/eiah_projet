#include <string.h>
#include <signal.h>
#include <sys/types.h>

void traiterSIGUSR1( int ) ;

int main(){
    int err ;
    struct sigaction sa;

    while(1){
        memset (&sa, 0, sizeof (sa));
        sa.sa_handler = (void *) traiterSIGUSR1 ;
        err = sigaction (SIGUSR1, &sa, NULL);
        if (err == -1) {
            perror("echec signal"); exit(1); 
        }
    }
}