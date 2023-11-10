#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[]){
    printf("\n****fils2 --> PID = %d\n",getpid());
    printf("%d",argv[1]);
    exit(3);
}