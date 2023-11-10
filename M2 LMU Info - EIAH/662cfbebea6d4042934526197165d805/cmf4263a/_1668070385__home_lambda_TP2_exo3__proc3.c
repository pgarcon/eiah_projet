
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void fils();

int main (int args, char* argv[]) {
    
    
    printf("PID pere : %d", getpid());
    
    
    pid_t idProc;
    idProc = fork();
    switch (idProc) {
        case -1:
            perror("Erreur creation fils");
            exit(1);
        case 0:
            fils();
            exit(0);
    }
    
    sleep(3);
}


void fils() {
    printf("PID fils : %d", getpid());
    printf("PPID fils : %d", getppid());
    sleep(6);
    printf("PID fils : %d", getpid());
    printf("PPID fils : %d", getppid());
}