#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void main(int nbp, char * arg[]){
    extern char *__progname;
    int q = arg[1];
    char * hex = "";
    while (q>0){
        hex = (q%16)+hex;
        q = q/16;
    }
    printf("Mon nom : %s\nMon PID : %d\nDecimal : %d\nHexadecimal :",__progname,getpid(),arg[1],hex);
    exit(3);
}