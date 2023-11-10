/* Gestion des processus sous Linux */
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    printf("\n***fils1 --> NOM= %s PID= %d\n", argv[0], getpid());
    if(argc > 1) {
        printf("Chaine de character : %s\n", argv[1]);
    }
    exit(3);
}