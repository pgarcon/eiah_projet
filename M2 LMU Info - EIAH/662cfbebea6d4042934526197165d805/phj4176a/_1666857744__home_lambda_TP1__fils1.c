/* Gestion des processus sous Linux */
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>

int main(int nbArg, char *arg[]) {
    printf("\n***fils1 --> PID= %d\n", getpid());
    exit(3);
}