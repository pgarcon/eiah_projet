#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

void main(int nbp, char * arg[]){
    extern char *__progname;
    //int q = arg[1];
    int q = 123;
    char hex[] = "";
    char ch;
    int r = q%16;
    int i = 0;
    
    while (q!=0){
        if (r>10){
            ch = r+55;
        } else {
            ch = r+48;
        }
        hex[i] = ch;
        i++;
        printf("%c\n%s\n",ch,hex);
        q = q/16;
    }
    
    
    printf("Mon nom : %s\nMon PID : %d\nDecimal : %d\nHexadecimal : %s\n",__progname,getpid(),123,hex);
    exit(3);
}