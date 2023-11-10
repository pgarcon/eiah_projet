#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void main(int nbp, char * arg[]){
    extern char *__progname;
    int q = arg[1];
    char * hex = "";
    printf("Mon nom : %s\nMon PID : %d\nDecimal : %d\nHexadecimal :",__progname,getpid(),arg[1],arg[1]);
    exit(3);
}