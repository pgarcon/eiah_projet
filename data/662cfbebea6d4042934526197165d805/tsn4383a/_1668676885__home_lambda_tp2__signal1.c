#include <stdio.h>
#include <signal.h>
#include <sys/types.h>

void traiterSIGUSR1(int);

int main (int argc, char const *argv){
    
    int err;
    struct sigaction sa;
    memset(&sa,0,sizeof(sa));
    sa.sa_sigaction = (void*)traiterSIGUSR1;
    
    while (1){
        err
        if ()
    }
}

void traiterSIGUSR1 (int idSig){
    
}