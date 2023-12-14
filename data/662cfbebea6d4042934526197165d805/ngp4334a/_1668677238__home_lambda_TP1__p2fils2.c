#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void main(int nbp, char * arg[]){
    extern char *__progname;
    //int q = arg[1];
    int q = 123;
    char * hex = "";
    char ch;
    
    while (q!=0){
        if ((q%16)>10){
            ch = q%16+48;
        } else {
            ch = q%16+55
        }
        hex += ch;
        q = q/16;
    }
    
    printf("Mon nom : %s\nMon PID : %d\nDecimal : %d\nHexadecimal : %s",__progname,getpid(),q,hex);
    exit(3);
}