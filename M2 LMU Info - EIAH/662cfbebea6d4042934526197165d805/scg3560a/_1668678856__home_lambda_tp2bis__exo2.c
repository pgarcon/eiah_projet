#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void traiterSIGCHILD(int);
int main(int argc, char* argv[]){
    
    int nbfils = strtol(argv[1],NULL,10);
    
    int err;
    struct signaction sa;
    
    memeset(&sa,0,sizeof(sa));
    sa.sa_signaction = (void*) traiterSIGCHILD;
    err=signaction(SIGCHILD,sa,NULL);
    
    if (err == -1) { perror("echec signal"); exit(1); }
    
    for (int i =0 ; i<nbfils ; i++){
        
    }
    
    return 0;
}

void traiterSIGCHILD(int sig){
    
}