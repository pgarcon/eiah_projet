#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    char chaineTemp[256]="";
    fgets(chaineTemp,256,stdin);
    if( strcmp("STOP",chaineTemp)!=0){
        strcat(chaine,chaineTemp);
    }else{
        write(descFic[1],chaine,256);
        exit(1);
    }
}