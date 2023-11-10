#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char* argv[]){
    printf("\n****fils1 --> PID = %d\n",getpid());
    printf("%d",argc);
    printf("%s",argv[0]);
    exit(3);
}