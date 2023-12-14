#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>



void traitFils1();

int main()
  {
    pid_t  idProc ;
    int  rapport, numSignal, statut;
    
    printf("\nProcessus pere %s et mon UID est :  %d\n",getlogin(),getuid());
    
    idProc = fork();
}


void traitFils1(){
    printf("\n***fils1 --> PID= %d\n", getpid());
    exit(3);
}

