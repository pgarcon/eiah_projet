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
    size_t read( int descFic[0], void * tampon, size_t nb ) ;
    size_t write( int descFic[1], const void * tampon, size_t nb ) ;
}

close(descFic[0]);
close(descFic[1]);
fprintf ( tubeQueue, "%sstop",) ;
fflush ( tubeQueue);
i=wait(&s);   
i=wait(&s);   
printf("fin du programme\n");
exit(EXIT_SUCCESS);
}


int fils1()
{
  char zz[10];
               
  close(descFic[0]);
  printf("Saisir une url :\n");
  scanf("%s", urli);
  write(descFic[1], &zz, 10);
  close(descFic[1]);                  

  exit(0);           
}





  exit(EXIT_SUCCESS);