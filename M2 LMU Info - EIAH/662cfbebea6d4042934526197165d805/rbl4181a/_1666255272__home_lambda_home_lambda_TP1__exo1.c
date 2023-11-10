#include <stdio.h>
#include <time.h>
#include <unistd.h>

time_t t;

t=time(null);

printf("%s\n", ctime(&t));
