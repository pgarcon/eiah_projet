#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char const* argv[])
{
    if (argc>1){
        printf("\n***fils1 --> PID= %d \n***fils1 --> nom= %s\n", getpid(), argv[0]);
        printf("***fils1 --> nmobre decimal= %d\n",atoi(argv[1]));
        printf("***fils1 --> nmobre Hexsa= %x\n",atoi(argv[1]));
    }
    exit(1);
}