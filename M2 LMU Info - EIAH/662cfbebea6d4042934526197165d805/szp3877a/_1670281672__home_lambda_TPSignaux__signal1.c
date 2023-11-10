/****************************************/
/*       Les signaux sous UNIX          */
/* Les timers et redirection de SIGCHLD */
/* qui signale la fin d'un enfant       */
/****************************************/

# include <sys/types.h>
# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include <stdio.h>
# include <wait.h>
# include <string.h>

int main ( )
{
    int i;
   // mise en place des traitements des signaux  
    int err ;
    struct sigaction sa;

    memset (&sa, 0, sizeof (sa));
    sa.sa_sigaction = (void *) finDeTimer ;
 
    err = sigaction (SIGCHLD, &sa, NULL);   
    if (err == -1) { perror("echec signal"); exit(1); }
    
    while(1<2){
        if (err == -1) { perror("echec signal"); exit(1); }
        printf("Hellow world!")
    } 
}

