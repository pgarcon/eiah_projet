#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>

void traitSIGUSR1(int);

int main() {
    int err;
    struct sigaction sa;
    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = traitSIGUSR1;
    err = sigaction(SIGUSR1, &sa, NULL);
    if(err == -1) {
        perror("echec signal");
        exit(1);
    }
    while(1);
}

