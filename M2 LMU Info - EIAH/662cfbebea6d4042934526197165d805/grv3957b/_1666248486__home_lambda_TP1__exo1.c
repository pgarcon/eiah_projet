#include <stdio.h>
#include <time.h>
#include <unistd.h>


int main(void){
    
    time_t t;
    t=time(NULL);
    printf("Today is %s", ctime(&t));
    
    uid_t getuid(void);
    The getuid() function shall return the real user ID of the calling process.

}