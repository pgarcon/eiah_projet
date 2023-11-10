#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void main(int nbp, char * par[]){
    char* progName = getprogname();
    printf("Mon nom : %d\nMon PID : %d\n%s",progName,getpid(),par[1]);
    exit(3);
}