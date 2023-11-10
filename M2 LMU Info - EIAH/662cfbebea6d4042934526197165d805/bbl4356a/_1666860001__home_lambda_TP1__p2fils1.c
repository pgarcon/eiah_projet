#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>

void main(int ac , char **argv)
{
  printf("\n***fils1 --> PID= %d\n", getpid());
  int i = 1;
  while (i < ac) {
      printf("\nArgument %d : %s",i,argv[i]);
      i++;
  }
  exit(3);
}