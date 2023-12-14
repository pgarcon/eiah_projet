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
    
    int i;
    for (i = 0; i < nbpar; i++) {
        printf("%d \n", p_tabpar);
        p_tabpar++;
    }
    exit(3);

}