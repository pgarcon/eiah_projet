#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>

int main(int nbpar, char * p_tabpar[])
{
    printf("\n***fils1 --> PID= %d\n", getpid());
    printf("%d", argc);
    exit(3);

}