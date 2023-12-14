#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>

int main(int n){
    int v=10; 
  printf("\n***fils2 --> PID= %d Hexa= %X Deci= %i\n", getpid(), n, n);
  *(int *)NULL=v;
}