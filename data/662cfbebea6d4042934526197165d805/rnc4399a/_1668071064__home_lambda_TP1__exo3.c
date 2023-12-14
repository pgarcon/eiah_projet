/* Gestion des processus sous Linux */

/* TDM1 - Exercice 3 */
# include <sys/wait.h>
# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int main()
{
    pid_t idProc;
    
    idProc = fork();
    
}