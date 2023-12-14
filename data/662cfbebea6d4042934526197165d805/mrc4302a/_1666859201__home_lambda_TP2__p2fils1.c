#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int traitementFils1(char * chaine);

int traitementFils1(char * chaine){
    printf("PID fils1 : %d\n chaine caractere : %s", getpid(), chaine);
    exit(3);
}