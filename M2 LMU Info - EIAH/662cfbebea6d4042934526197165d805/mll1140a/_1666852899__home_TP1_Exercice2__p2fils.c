#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>

int main(int param)
{
    printf("\n***fils1 --> PID= %d\n", getpid());
    printf("%d", param);
    exit(param);

}