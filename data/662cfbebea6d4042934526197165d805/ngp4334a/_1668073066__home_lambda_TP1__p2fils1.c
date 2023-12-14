#include <stdio.h>
#include <stdlib.h>

void main(char str[]){
    printf("Mon nom : %d\nMon PID : %d\n%s",getprogname(),getpid(),&str[]);
    exit(3);
}