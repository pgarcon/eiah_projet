#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <sys/wait.h>
/* fonction de traitement du fils1 */
/* affiche son pid et se termine normalement en retournant 3 */
void traitFils1(char *chaine[])
{
  printf("\n***fils1 --> PID= %d\n", getpid());
  printf("Chaine : %s\n", chaine);
  exit(3);
}