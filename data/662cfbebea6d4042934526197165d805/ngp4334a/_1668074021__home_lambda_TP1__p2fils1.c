#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void main(int nbp, char * arg[]){
    extern char *__progname;
    printf("Mon nom : %s\nMon PID : %d\n%s",__progname,getpid(),arg[1]);
    exit(3);
}