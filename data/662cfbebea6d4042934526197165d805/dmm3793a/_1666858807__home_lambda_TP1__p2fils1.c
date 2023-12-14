#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
    printf("\n****fils1 --> PID = %d\n",getpid());
    exit(3);
}