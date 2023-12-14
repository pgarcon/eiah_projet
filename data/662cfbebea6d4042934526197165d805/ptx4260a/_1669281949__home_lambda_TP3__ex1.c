#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>

int main()
{
  pid_t pidProc;
  
  
  pidProc=fork();
  switch(pidProc)
  {
      case -1:
        printf("ERREUR PAS DE PROCESSUS CREE");
        exit(1);
      case 0 :
        printf("FILS FAIT !!");
        exit(1);

  }
  wait();
  printf("ICI LE PERE");
}