#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>





int main(int argc, char *argv[])
  {
    printf("\n***fils1 --> PID= %d\n", getpid());
    printf("%s\n",argv[1]);
    exit(3);
}



