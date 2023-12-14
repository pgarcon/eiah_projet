#include <string.h>
#include <signal.h>
#include <sys/types.h>
# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void traiterSIGUSR1( int ) ;
int main( )
{
 int err ;
 struct sigaction sa;
 int baba=1;
while (baba = 1){
    memset (&sa, 0, sizeof (sa));
    sa.sa_sigaction = (void *) traiterSIGUSR1 ;
    err = sigaction (SIGUSR1, &sa, NULL); 
    if (err == -1) { perror("echec signal"); exit(1); }
    
}
printf(" mon PID pere est :  %d\n",getpid());
