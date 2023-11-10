#include <stdio.h>
#include <time.h>
#include <sys/types.h>
#include <unistd.h>


void main() {

    time_t t;
    t=time(NULL);
    printf("%s\n",ctime(&t));

    // Premier fils
    pid_t idProc;
    idProc = fork();
    switch (idProc) {
        case -1:
            perror("echec fork");
            exit(1);

        case 0:
            printf("%d\n", getpid(void));
            exit(3);
    }

}