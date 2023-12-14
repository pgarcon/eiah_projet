#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>

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







  exit(EXIT_SUCCESS);