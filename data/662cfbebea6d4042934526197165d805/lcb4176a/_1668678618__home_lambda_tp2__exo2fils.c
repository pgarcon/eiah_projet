#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <string.h>
int main(])
{
    int temp =(random()%20)+1;
    printf("pid =%d %d\n",getpid(),temp);
    sleep(temp);
    printf("fin de %d\n",getpid());
}