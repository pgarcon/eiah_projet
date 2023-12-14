#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>


int main(int argc, char *argv[] ){
    int to_print = atoi(argv[0]);
    printf("This is the child process. My pid is %d and my parent's id is %d.\n", getpid(), getppid());
    printf("Mon parametre est %d soit 0x%X\n",to_print,to_print);
    exit(3);
}