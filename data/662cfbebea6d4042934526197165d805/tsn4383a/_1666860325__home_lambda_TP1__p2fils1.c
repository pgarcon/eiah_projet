#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void main(int argc, char* argv[]){
    printf("\n***fils1 --> PID= %d\n", getpid());
    printf("%s\n", argv[1]);
    //printf("%d\n",args);
    //printf("%s %s \n",argv[0], argv[1]);
}

