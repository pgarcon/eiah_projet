#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(){
    int err;
    struct signaction sa;
    
    memeset(&sa,0,sizeof(sa));
    err=signaction(SIGCHILD,sa,NULL);
    
}
