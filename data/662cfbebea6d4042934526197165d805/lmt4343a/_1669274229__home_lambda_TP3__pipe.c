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