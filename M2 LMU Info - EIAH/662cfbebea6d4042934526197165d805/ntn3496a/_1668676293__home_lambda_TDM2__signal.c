#include <string.h>
#include <signal.h>
#include <sys/types.h>

void traiterSIGUSR1(int);
int main()
{
    int err;
    struct signaction sa;
    memset(&sa,0,sizeof(sa));
    while(1){
        sa.sa_signaction = (void*) traiterSIGUSR1;
        err = signaction(SIGUSR1,&sa,NULL);
        if(err==-1){perror("echec signal");exit(1);}
    }
}

void traiterSIGUSR1(int idSig)
{
    if (idSig != SIGUSR1) {
        perror("erreur systeme");
        exit(2);
    }
    else {
        printf("PID %d et le numero du signal est %d",getPID(),idSig);
    }
} 