#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char const* argv[])
{
    if (argc>1){
        printf("\n***fils1 --> PID= %d \n***fils1 --> nom= %s\n", getpid(), argv[0]);
        printf("***fils1 --> message= %s\n",argv[1]);
    }
    exit(1);
}