#include <sys/types.h>
#include <string.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(){
    
    int descFic[2];
    int err;
    pid_t  idProc;
    
    err = pipe( descFic ) ;
    if (err == -1) {
        perror("echec pipe");
        exit(1);
    }
    
    idProc = fork() ;
    switch  (idProc) {
        case -1 : perror("echec fork"); exit(1);   /* erreur */
        case 0 :  fils1();
    }
    
}