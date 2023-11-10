#include <stdio.h>
#include <time.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

void main() {

    time_t t;
    t=time(NULL);
    printf("%s\n",ctime(&t));
    printf("%d\n", getuid());

    // Premier fils
    pid_t idProc;
    idProc = fork();
    switch (idProc) {
        case -1:
            perror("echec fork");
            exit(1);
            
        case 0:
            printf("Pid du premier processus : %d\n\n", getpid());
            exit(3);
    }
    
}