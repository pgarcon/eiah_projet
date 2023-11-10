#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void traiterFils1(char* s[]) {
    printf("Fils 1 : PID = %d\n", getpid());
    printf("Chaine : %s\n", *s);
    exit(3);
}