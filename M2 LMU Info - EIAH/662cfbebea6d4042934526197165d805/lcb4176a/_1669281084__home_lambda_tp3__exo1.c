#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int descFic[2];
    int err = pipe(descFic);
    if ( err == -1 ) { perror( "echec pipe" ) ; exit(1) ; }
    pid_t  idProc ;
    
    idProc = fork() ;
    switch  (idProc ){
        case -1:
            perror( "echec pipe" ) ; 
            exit(1) ;
        case 0:
            procedureFils();
            break;
        default:
            procedurePere();
            break;
    }
}

int procedureFils(){
    int close( int descFic[1] ) ;
    ssize_t read( int descFic[0], void * tampon, size_t nb ) ;
}

int procedurePere(){
    int close(descFic[0] ) ;
    write(descFic[1],)
}