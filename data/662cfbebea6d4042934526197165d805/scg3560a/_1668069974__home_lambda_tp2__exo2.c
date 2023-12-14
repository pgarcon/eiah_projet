#include <sys/types.h>
#include <unistd.h> 
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
pid_t  idProc ;
int  rapport, numSignal, statut;

time_t t =time(NULL);
printf("Je suis : %s\nL'uid est : %d\nNous sommes le : %s\n",getlogin(),getuid(), ctime(&t));



idProc = fork() ;
switch  (idProc )
    {
    case -1 : perror("echec fork");exit(1);   
    
    case 0 :  execl("/home/lambda/tp2/tF1","tF1","Ceci est le fils 1 ",NULL); exit(2) ;   
    }
    
/* creation du fils2    
idProc = fork() ;
switch  (idProc )
    {
    case -1 : perror("echec fork");exit(1);   
    
    case 0 :  traitFils2(); exit(1) ;   
    }
 */


}
