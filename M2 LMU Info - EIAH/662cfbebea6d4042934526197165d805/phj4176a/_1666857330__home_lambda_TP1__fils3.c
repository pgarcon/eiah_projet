/* Gestion des processus sous Linux */
/* TDM1 - Exercice 1 */
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>

int main() {
    int i,v=10;
    printf("\n***fils3 --> PID= %d\n", getpid());
    i=10;
    v=1/(v-i);
}