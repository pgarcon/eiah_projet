# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
#include <unistd.h>

int main()
{
pid_t  pidProc ;
int  err,rapport, numSignal, statut;

int tube[2] ;
int err ;
err =pipe( descFic ) ;
pidProc = fork() ;
switch  (pidProc )
    {
    case -1 : perror("echec fork");exit(1);   /* erreur */
    
    case 0 : /* execution du traitement du fils1 */
             err=execl("fils" "coucou", NULL);
             if (err == -1) 
              { perror("echec execl");exit(2);}   
    }