/* Gestion des processus sous Linux */
/* TDM1 - Exercice 1 */
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
  printf("\n***fils1 --> PID= %d\n", getpid());
  exit(3);
}


