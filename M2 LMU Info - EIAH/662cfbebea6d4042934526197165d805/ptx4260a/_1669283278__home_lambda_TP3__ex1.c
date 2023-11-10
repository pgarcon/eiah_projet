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
        printf("FILS FAIT !! \n MON PERE EST : %d \n",getppid());
        exit(1);

  }
  waitpid( pidProc , NULL , 0 ) ;
  printf("ICI LE PERE avec pid : %d \n",getpid());
}