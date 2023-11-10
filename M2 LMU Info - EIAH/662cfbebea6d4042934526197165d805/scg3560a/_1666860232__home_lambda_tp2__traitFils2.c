#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h> 

int main(int argc, char* argv[]){
    int v=10;
    printf("\n***fils2 --> PID= %d\n", getpid());
    *(int *)NULL=v;
}