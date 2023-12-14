#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

void main(char str[]){
    printf("Mon nom : %d\nMon PID : %d\n%s",getprogname(),getpid(),str);
    exit(3);
}