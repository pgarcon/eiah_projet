#include <stdio.h>
#include <time.h>

pid_t getpid(void);


int main(void){
    time_t t;
    t = time(NULL);
    printf("%s\n",ctime(&t));
    return 1;
}

