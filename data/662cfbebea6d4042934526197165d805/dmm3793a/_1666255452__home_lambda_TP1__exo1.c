#include <stdio.h>
#include <time.h>

time_t t;

void main()
{
    t=time(NULL);
    printf("%s\n",ctime(&t));
}
