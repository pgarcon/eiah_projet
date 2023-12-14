#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>

void main(char *s)
{
    printf("\n***fils1 --> PID= %d String= %s\n", getpid(), s);
    exit(3);
}