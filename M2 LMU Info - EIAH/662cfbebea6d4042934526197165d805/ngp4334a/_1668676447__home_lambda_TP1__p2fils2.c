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
                strcat(hex,"A");
                break;
            case 11 :
                strcat(hex,"B");
                break;
            case 12 :
                strcat(hex,"C");
                break;
            case 13 :
                strcat(hex,"D");
                break;
            case 14 :
                strcat(hex,"E");
                break;
            case 15 :
                strcat(hex,"F");
                break;
            default :
                hex = strcat(q%16,hex);
        }
        q = q/16;
    }
    
    printf("Mon nom : %s\nMon PID : %d\nDecimal : %d\nHexadecimal : %s",__progname,getpid(),q,hex);
    exit(3);
}