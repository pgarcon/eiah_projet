#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <time.h>

void main(){
    time_t t;
    uid_t uid;
    uid = getuid();
    t=time(NULL);
    printf("%s\n",ctime(&t));
    printf("%x\n",get&uid);
}
