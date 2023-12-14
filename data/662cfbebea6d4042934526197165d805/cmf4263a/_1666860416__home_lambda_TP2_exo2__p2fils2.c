#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int args, char* argv[]) {
    printf("Fils 2 : PID = %d\n", getpid());
    printf("Nombre en hexa : %x nombre en deci : %d\n", atoi(argv[1]), atoi(argv[1]));
    exit(3);
}