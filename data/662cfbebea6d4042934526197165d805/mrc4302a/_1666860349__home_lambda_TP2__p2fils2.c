#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>



int main(int nombre){
    printf("PID fils2 : %dnb en hexa : %x, nb en deci : %d\n", getpid(), nombre, nombre);
    exit(3);
}