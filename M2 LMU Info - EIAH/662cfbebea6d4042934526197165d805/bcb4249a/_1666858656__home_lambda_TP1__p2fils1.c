#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>





int main(char* chaine)
  {
    printf("\n***fils1 --> PID= %d\n", getpid());
    printf(chaine);
    exit(3);
}



