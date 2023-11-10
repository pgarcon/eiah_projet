#include <string.h>
#include <signal.h>
#include <sys/types.h>

void traiterSigurs1();

void main(int argc, char* argv[]) {
    
    int err;
    struct sigaction sa;
    memset (&sa, 0, sizeof (sa));
    sa.sa_handler = (void *) traiterSigurs1;
    
    while(true) {
        err = sigaction (SIGUSR1, &sa, NULL);
        if (err == -1) { perror("echec signal"); exit(1); }
    }
}

void traiterSigurs1() {
    
    printf("PID : %d\n",getpid());
}