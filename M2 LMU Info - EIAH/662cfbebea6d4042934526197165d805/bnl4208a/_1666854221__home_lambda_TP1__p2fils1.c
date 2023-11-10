#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>

void main(char * str)
{
  printf("\n***fils1 --> PID= %d\n", getpid());
  //printf("\n%s\n", str);
  exit(3);
}