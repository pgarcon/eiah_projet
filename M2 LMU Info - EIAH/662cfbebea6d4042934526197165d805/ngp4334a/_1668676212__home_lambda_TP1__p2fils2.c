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
                hex = "A"+hex;
                break;
            case 11 :
                hex = "B"+hex;
                break;
            case 12 :
                hex = "C"+hex;
                break;
            case 13 :
                hex = "D"+hex;
                break;
            case 14 :
                hex = "E"+hex;
                break;
            case 15 :
                hex = "F"+hex;
                break
            default :
                hex = (q%16)+hex;
        }
        q = q/16;
    }
    
    printf("Mon nom : %s\nMon PID : %d\nDecimal : %d\nHexadecimal : %s",__progname,getpid(),q,hex);
    exit(3);
}