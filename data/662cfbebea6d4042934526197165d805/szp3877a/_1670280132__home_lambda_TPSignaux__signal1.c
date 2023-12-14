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
int x = 100;
void signal_handler(int sig){
    x+=5;
    printf("x=%d\n",x)
}
int main ( )
{
    signal(SIGUSR1, signal_handler);
    pid_t parent=getppid();
    while(x>99){
         kill(parent, SIGUSR1)   
    }

}

