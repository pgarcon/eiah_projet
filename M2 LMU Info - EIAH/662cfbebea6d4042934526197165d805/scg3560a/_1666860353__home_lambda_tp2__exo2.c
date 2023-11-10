#include <sys/types.h>
#include <unistd.h> 
#include <stdlib.h>
#include <stdio.h>
#include <time.h>




int main()
{
pid_t  idProc ;
int  rapport, numSignal, statut;

time_t t =time(NULL);
printf("Je suis : %s\nL'uid est : %d\nNous sommes le : %s\n",getlogin(),getuid(), ctime(&t));


/* processus pere */
/* creation du fils1 */
idProc = fork() ;
switch  (idProc )
    {
    case -1 : perror("echec fork");exit(1);   /* erreur */
    
    case 0 :  execl("/home/lambda/tp2/traitFils1.c","traitFils1.c","Ceci est le fils 1 ",NULL); exit(1) ;   /* appel du traitement du fils1 */
    }
    
/* creation du fils2    
idProc = fork() ;
switch  (idProc )
    {
    case -1 : perror("echec fork");exit(1);   
    
    case 0 :  traitFils2(); exit(1) ;   
    }
 */

idProc = wait( &rapport ) ;
while  ( idProc != -1 )
    {    
    printf("\nTerminaison du fils de PID= %d\n", idProc);
    
    numSignal = rapport & 0x7F ;    
    switch ( numSignal )
    {
    case 0 :    /* fin normale */
            statut = (rapport >>8)& 0xFF  ;
            printf("Fin normale, statut= %d\n", statut); break ;
    
    default :    /* fin anormale */
            printf("Fin anormale, numSignal= %d\n", numSignal);
    
    }
    idProc = wait( &rapport ) ;
    }
}
