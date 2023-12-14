#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>

void main(int ac , char **argv)
{
  int v=10; 
  printf("\n***fils2 --> PID= %d\n", getpid());
  printf("nb %d --> PID= %d\n", argv[1],);
}