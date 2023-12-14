#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void main(int nombre) {
    printf("Fils 1 : PID = %d\n", getpid());
    printf("Nombre : %x\n", nombre);
    exit(3);
}