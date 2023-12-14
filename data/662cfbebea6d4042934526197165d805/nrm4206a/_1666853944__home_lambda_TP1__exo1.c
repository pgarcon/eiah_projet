#include <stdio.h>
#include <time.h>
# include <sys/types.h>
# include <unistd.h>

int main(void) {
    pid_t getpid(void);
    time_t t;
    t = time(NULL);
    printf("%s %d\n",ctime(&t), pid_t);
    return 1;
}

