#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

void fils1();
void fils2();

int main (int args, char* argv[]) {
    

    pid_t idProc;
    idProc = fork();
    switch (idProc) {
        case -1:
            perror("Erreur creation fils");
            exit(1);
        case 0:
            fils1();
    }
    
    idProc = fork();
    switch (idProc) {
        case -1:
            perror("Erreur creation fils");
            exit(1);
        case 0:
            fils2();
    }
    
    sleep(7);
}


void fils1() {
    printf("Lancement fils1\n");
    srand(null);
    for (int i=1;i<26;i++) {
        printf("%d\n",i);
        usleep(rand() % 101);
    }
    exit(1);
}

void fils2() {
    printf("Lancement fils2\n");
    srand(null);
    for (int i=26;i<51;i++) {
        printf("%d\n",i);
        usleep(rand() % 101);
    }
    exit(2);
}