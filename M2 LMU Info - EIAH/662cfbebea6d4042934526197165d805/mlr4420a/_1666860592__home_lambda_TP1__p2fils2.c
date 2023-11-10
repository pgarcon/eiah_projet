/* Gestion des processus sous Linux */
/* TDM1 - Exercice 2 */
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int v=10; 
    printf("\n***fils2 --> PID= %d\n", getpid());
    *(int *)NULL=v;
}