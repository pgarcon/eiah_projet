#include <stdio.h>
#include <time.h>

time_t t;

t=time (NULL);

printf("%s\n",ctime(&t));