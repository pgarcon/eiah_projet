#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void main(int nbp, char * arg[]){
    extern char *__progname;
    //int q = arg[1];
    int q = 123;
    char * hex = "";
    while (q>0){
        hex = (q%16)+hex;
        q = q/16;
    }
    printf("Mon nom : %s\nMon PID : %d\nDecimal : %s\nHexadecimal : %s",__progname,getpid(),q,hex);
    exit(3);
}