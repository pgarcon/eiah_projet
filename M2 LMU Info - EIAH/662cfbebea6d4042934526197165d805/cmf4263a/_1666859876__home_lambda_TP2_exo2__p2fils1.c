#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int args,char* argv[]) {
    printf("Fils 1 : PID = %d\n", getpid());
    printf("Chaine : %s\n", argv[1]);
    exit(3);
}