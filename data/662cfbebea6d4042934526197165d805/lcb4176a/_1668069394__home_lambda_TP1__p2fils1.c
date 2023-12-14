#include <stdio.h>

int main(int argc, char const* argv[])
{
    if (argc>1){
        printf("\n***fils1 --> PID= %d \n***fils1 --> nom= %d\n", getpid(), argv[0]);
        printf("***fils1 --> message= %d\n",argv[1]);
    }
    
}