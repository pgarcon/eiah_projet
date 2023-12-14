#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void main(int nbp, char * par[]){
    printf("Mon nom : %d\nMon PID : %d\n%s",getprogname(),getpid(),str);
    exit(3);
}