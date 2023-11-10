#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void main(int args, char* argv[]){
    printf("\n***fils1 --> PID= %d\n", getpid());
    printf("%d\n",args);
    printf("%s %s \n",argv[0], argv[1]);
}