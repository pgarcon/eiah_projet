#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>


int main(void* chaine){
      printf("This is the child process. My pid is %d and my parent's id is %d.\n", getpid(), getppid());
      printf("Mon parametre est %s\n",(char*)chaine);
    exit(3);
}