#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>

int main(int argc, char* argv[]){
    printf("\n***fils1 --> PID= %d\n", getpid());
    exit(3);
}