#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>

void traitFils1(string m);

int main (){
    pid_t idProc;
    
    switch(idProc){
        case -1:
            perror("Echec fils 1");
            exit(1);
        case 0:
            traitFils1();
            exit(1);
    }
}

void traitFils(string m){
    printf("\n***fils1 --> PID= %d\n", getpid());
    printf("\n%s", m);
    exit(3);
}