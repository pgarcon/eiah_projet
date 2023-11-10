#include <stdio.h>
#include <time.h>
#include <unistd.h>


void main()
{
    time_t t;
    uid_t uid=getuid(void);
    t=time(NULL);
    printf("%s\n %d",ctime(&t),uid);
    
}
