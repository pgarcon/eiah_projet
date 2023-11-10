#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void traiterSIGCHILD(int);
int main(){
    
    int err;
    struct signaction sa;
    
    memeset(&sa,0,sizeof(sa));
    sa.sa_signaction = (void*) traiterSIGCHILD;
    err=signaction(SIGCHILD,sa,NULL);
    
    if (err == -1) { perror("echec signal"); exit(1); }
    
    
    
    return 0;
}

void traiterSIGCHILD(int sig){
    
}