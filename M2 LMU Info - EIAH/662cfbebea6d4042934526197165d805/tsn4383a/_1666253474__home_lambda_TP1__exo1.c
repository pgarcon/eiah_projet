#include <stdio.h>
#include <time.h>

void main(){
    time_t t;
    t=time(NULL);
    printf("%s\n",ctime(t));
}
