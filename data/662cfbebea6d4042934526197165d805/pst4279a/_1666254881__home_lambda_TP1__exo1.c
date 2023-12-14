#include <stdio.h>
#include <time.h>
# include <sys/types.h>
# include <unistd.h>

void main() {

    time_t t;
    t=time(NULL);
    printf("%s\n",ctime(&t));

    pid_t IdProc;
    IdProc = fork();
    printf("lol\n");
    
}