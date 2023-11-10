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
  printf("\nLes argument : %s",argv[]);
  exit(3);
}