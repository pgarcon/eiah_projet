#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <sys/types.h>

void main() {
    time_t t;
    t=time(NULL);
    printf("%s\n",ctime(&t));
    printf("%x\n", getuid());
    fork();
    fork();
    fork();
}

