#include <stdio.h>

void traiterSIGUSR1();

int main (){
    
    int err;
    struct sigaction sa;
    memset(&sa,0,sizeof(sa));
    sa.sa_sigaction = (void*)traiterSIGUSR1;
    
    while (1){
        err
        if ()
    }
}

void traiterSIGUSR1 (){
    
}