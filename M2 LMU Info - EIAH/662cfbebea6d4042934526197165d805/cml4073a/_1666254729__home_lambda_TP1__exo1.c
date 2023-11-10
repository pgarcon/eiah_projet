#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


void traitFils1();
void traitFils2();
void traitFils3();

int main () {
    pid_t proc = fork();
    int nb;
    
    /* process pere */
    time_t t;
    
    t=time(NULL);
    uid_t getuid(void);
    
    printf("%s\n",ctime(&t));
    printf("L'UID est %d/n",getuid());
    
    
    
    
}
