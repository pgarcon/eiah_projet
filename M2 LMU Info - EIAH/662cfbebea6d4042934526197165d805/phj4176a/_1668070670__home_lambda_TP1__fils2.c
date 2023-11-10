/* Gestion des processus sous Linux */
/* TDM1 - Exercice 1 */
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    int v=10; 
    printf("\n***fils2 --> PID= %d\n", getpid());
    if (argc>1) {
      printf("nb (decimal) = %d ; nb (hexadecimal) = %x", atoi(argv[1]), atoi(argv[1]));
    }
  //  *(int *)NULL=v;
}