#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


void traitFils1();
void traitFils2();
void traitFils3();

int main () {
    pid_t proc = fork();
    int nb;
    
    /* process pere */
    printf("PID est %i\n, getpid()");
    
    
    
    
}
