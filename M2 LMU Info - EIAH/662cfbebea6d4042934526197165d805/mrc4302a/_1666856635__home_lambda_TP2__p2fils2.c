#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int traitementFils2(nombre){
    printf("PID fils1 : %d\n nb en hexa : %x, nb en deci : %d", getpid(), nombre, nombre);
}