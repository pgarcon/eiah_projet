#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <string.h>
int main(])
{
    int temp =(random()%10)+1;
    printf("pid =%d %d\n",getpid(),temp);
    
}