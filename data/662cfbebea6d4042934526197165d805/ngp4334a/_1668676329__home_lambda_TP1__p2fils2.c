#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void main(int nbp, char * arg[]){
    extern char *__progname;
    //int q = arg[1];
    int q = 123;
    char * hex = "";
    while (q>0) {
        switch (q%16){
            case 10 :
                hex = strcat("A",hex);
                break;
            case 11 :
                hex = strcat("B",hex);
                break;
            case 12 :
                hex = strcat("C",hex);
                break;
            case 13 :
                hex = strcat("D",hex);
                break;
            case 14 :
                hex = strcat("E",hex);
                break;
            case 15 :
                hex = strcat("F",hex);
                break;
            default :
                hex = strcat(q%16,hex);
        }
        q = q/16;
    }
    
    printf("Mon nom : %s\nMon PID : %d\nDecimal : %d\nHexadecimal : %s",__progname,getpid(),q,hex);
    exit(3);
}