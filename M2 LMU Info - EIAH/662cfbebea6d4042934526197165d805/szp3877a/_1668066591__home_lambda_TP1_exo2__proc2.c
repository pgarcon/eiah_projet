# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int main()
{
pid_t  idProc ;
int  err,rapport, numSignal, statut;

char * tabParam[3]={"p2fils2", "123456", NULL};

/* processus pere */
/* creation du fils1 */
idProc = fork() ;
switch  (idProc )
    {
    case -1 : perror("echec fork");exit(1);   /* erreur */
    
    case 0 : /* execution du traitement du fils1 */
    		 err=execl("./p2fils1", "p2fils1", "coucou", NULL);
			 if (err == -1)
			  { perror("echec execl");exit(2);}	  
    }
