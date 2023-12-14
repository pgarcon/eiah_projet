#include <stdio.h>
#include <time.h>

void main(){
    time_t t;
    uid_t uid;
    uid = getuid();
    t=time(NULL);
    printf("%s\n",ctime(&t));
    printf("%f\n",&uid);
}
