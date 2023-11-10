#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int chiffre = atoi(argv[1]);
    printf("\nJe suis : %d et mon UID est :  %d\n",getpid(),getppid());
    printf("Le parametre est : %s\n",argv[1]);
    printf("En decimal il corespond a  %d et en hexadecimal a %X\n",chiffre,chiffre);
}