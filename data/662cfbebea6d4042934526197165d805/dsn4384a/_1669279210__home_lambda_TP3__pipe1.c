#include <sys/types.h>
#include <string.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(){
    
    int descFic[2] ;
    int err ;
    
    err = pipe( descFic ) ;
    if ( err == -1 ) {
        perror("echec pipe");
        exit(1);
    }
    
}