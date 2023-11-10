#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>

int main(int argc, char const *argv[]){
    pid_t idProc ;
    char tampon[512];
     
    int desFic[2];
    int err;
    
    err = pipe[desFic];
    if (err == 1){
        perror("echec pipe");
        exit(1);
    }
     
    idProc = fork() ;
    switch (idProc ) {
        case -1 : 
            perror("echec fork") ;
            exit(1) ;
        case 0 :
            traiterEnfant(descFic[0]) ;
            exit(0) ;
    }
    
    scanf("%s",tampon);
    printf("lu au clavier %s \n",tampon);
    write(desFic[1],tampon,strlen(tampon));

}

void traiterEnfant(int tube) {
    char tampon[512];
    
    read(tube,tampon,sizeof(tampon));
    printf("Fils: lu depuis tube : %s\n",tampon);
}