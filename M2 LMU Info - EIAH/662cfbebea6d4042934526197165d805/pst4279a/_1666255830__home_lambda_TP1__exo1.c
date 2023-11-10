#include <stdio.h>
#include <time.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

void main() {

    time_t t;
    t=time(NULL);
    uid_t uid;
    uid = getuid();
    printf("%s\n",ctime(&t));
    printf("%s\n", uid);

    // Premier fils
    pid_t idProc;
    idProc = fork();
    switch (idProc) {
        case -1:
            perror("echec fork");
            exit(1);
            
        case 0:
            printf("%d\n", getpid());
            exit(3);
    }
    
}