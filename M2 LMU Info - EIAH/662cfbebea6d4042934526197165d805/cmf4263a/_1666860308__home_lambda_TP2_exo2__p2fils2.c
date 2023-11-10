#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int nombre) {
    printf("Fils 2 : PID = %d\n", getpid());
    printf("Nombre en hexa : %x nombre en deci : %d\n", nombre, nombre);
    exit(3);
}