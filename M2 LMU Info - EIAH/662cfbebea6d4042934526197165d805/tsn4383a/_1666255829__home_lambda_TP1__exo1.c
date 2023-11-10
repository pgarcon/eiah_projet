#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <time.h>

void main(){
    time_t t;
    t=time(NULL);
    printf("%s\n",ctime(&t));
    printf("%x\n",getuid());
}


