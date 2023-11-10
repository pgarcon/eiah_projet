#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>

int main(int argc, char *argv[]) {
    printf("\nJe suis : %s et mon UID est :  %d\n",getpid(),getppid());
    printf("Le parametre est : %s\n",argv[1]);
}