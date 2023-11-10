#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <time.h>

void main(){
    time_t t;
    t=time(NULL);
    printf("%s\n",ctime(&t));
    printf("%x\n",getuid());
    
    //Premier fils
    pid_t idProc1();
    int err;
    
    idProc1 = fork();
    switch(idProc1){
        case -1:
        
        case 0:
    }
    
    wait();
}


