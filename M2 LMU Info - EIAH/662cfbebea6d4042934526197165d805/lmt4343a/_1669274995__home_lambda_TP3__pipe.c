#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>

void fils1();

int main()
{
    
int pipe( int descFic[2] ) ;

int descFic[2] ;
int err ;

err = pipe( descFic ) ;
if ( err == -1 ) { 
    perror("echec pipe") ; exit(1) ;
}

if ( err == 0 ) {
    fils1();
}

close(fd[0]); 
close(fd[1]);
fprintf(stderr, "attente de la fin des processus!\n");
i=wait(&s);   
i=wait(&s);   
printf("fin du programme\n");
exit(EXIT_SUCCESS);
}


int fils1()
{
  char urli[100];
               
  close(fd[0]);
  printf("Saisir une url :\n");
  scanf("%s", urli);
  write(fd[1], &urli, 100);
  close(fd[1]);                  

  exit(0);           
}





  exit(EXIT_SUCCESS);