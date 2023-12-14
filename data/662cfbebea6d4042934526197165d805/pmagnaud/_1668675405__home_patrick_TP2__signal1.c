/* Gestion des processus sous Linux */
/* TDM1 - Exercice 1 */
//#include <sys/types.h>
//#include <sys/wait.h>
//#include <unistd.h>
//#include <stdlib.h>
#include <stdio.h>
//#include <string.h>
//#include <time.h>

void traitSIGUSR1(int);

int main()
{
    int err ;
    struct sigaction sa;
    memset (&sa, 0, sizeof (sa));
    sa.sa_handler = traiterSIGUSR1 ;
    err = sigaction (SIGUSR1, &sa, NULL);
    if (err == -1) {
        perror("echec signal");
        exit(1);
    }
    
    while(1);
}


/* fonction de traitement du signal SIGUSR1 */
void traitSIGUSR1(int num) {

    printf("Je suis le fils 1 et mon pid est %d\n", getpid());
    exit(3);
}
