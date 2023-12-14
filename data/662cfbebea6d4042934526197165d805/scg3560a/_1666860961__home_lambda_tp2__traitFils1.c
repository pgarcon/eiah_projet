#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h> 

int main(int argc, char* argv[]){
    printf("\n***fils1 --> PID= %d\n", getpid());
    for(int i =0;i<argc;i++){
        printf("%s\n",argv[i]);
    }
    exit(3);
}