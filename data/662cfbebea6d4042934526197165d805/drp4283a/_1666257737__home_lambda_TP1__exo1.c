#include <stdio.h>
#include <time.h>
#include <unistd.h>

time_t t;
t = time(NULL);
uid_t getuid(void);
printf("date: %s uid: %s \n",time(NULL),getuid(void)));