#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char* argv[]){
    printf("\n****fils2 --> PID = %d\n",getpid());
    printf("%d",argv[1]); // coder pour print un int au lieu d'un string
    exit(3);
}