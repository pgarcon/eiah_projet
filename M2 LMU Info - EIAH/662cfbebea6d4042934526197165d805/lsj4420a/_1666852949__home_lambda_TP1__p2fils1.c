#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>


int main(int argc, char *argv[] ){
      printf("This is the child process. My pid is %d and my parent's id is %d.\n", getpid(), getppid());
      printf("Mon parametre est %s\n",argv[0]);
    exit(3);
}