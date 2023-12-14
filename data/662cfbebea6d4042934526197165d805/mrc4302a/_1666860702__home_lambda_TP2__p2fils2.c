#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>



int main(int nombre, char* arg[]){
    printf("PID fils2 : %d nb en hexa : %x, nb en deci : %d\n", getpid(), arg[1], arg[1]);
    exit(3);
}