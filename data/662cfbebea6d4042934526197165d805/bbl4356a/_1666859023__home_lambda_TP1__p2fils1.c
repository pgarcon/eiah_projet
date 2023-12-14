#include <string.h>
#include <sys/types.h>

void main(int ac , char **argv)
{
  printf("\n***fils1 --> PID= %d\n", getpid());
  printf("\nLes argument : %s",argv)
  exit(3);
}