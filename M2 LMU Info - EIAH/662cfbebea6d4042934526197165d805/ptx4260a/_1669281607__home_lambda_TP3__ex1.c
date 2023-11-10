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
        break;
      case 0 :
        printf("FILS FAIT !!");
        exit();
        break;
  }
  wait();
  printf("ICI LE PERE");
}