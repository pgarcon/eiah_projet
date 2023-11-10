#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(char * chaine){
    printf("PID fils1 : %d , chaine caractere : %s\n", getpid(), chaine);
    exit(3);
}