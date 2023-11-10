#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, int argv){
    printf("\n****fils2 --> PID = %d\n",getpid());
    printf("%d",argv);
    exit(3);
}