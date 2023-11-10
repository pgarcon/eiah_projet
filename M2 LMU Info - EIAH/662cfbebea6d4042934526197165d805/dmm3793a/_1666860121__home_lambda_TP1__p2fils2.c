#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, int argv[]){
    printf("\n****fils1 --> PID = %d\n",getpid());
    printf("%s",argv[1]);
    exit(3);
}