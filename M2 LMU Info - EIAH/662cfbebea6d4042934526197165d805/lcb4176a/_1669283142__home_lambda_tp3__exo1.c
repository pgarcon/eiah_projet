#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int procedurePere();
int procedureFils();
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
            procedureFils(descFic);
            break;
        default:
            procedurePere(descFic);
            break;
    }
}

int procedureFils(int descFic[2]){
    close(descFic[1] ) ;
    char chaine[256];
    int nbLus = read(descFic[0],chaine,256 ) ;
    if (nbLus == -1){perror( "echec pipe" ) ; exit(1) ; }
    printf("%s\n",chaine);
}

int procedurePere(int descFic[2]){
    close(descFic[0] ) ;
    char chaine[256];
    scanf("%s\n",chaine);
    fgets(chaine,256,stdin);
    write(descFic[1],chaine,256);
}