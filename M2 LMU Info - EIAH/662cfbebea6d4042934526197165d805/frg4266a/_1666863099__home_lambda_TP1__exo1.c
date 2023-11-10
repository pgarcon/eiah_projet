#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <sys/types.h>

time_t t;
t=time(NULL);
printf("%s\n",ctime(&t));

uid_t getuid(void);

pid_t f1, f2, f3;

int, rep1, rep2, rep3;

f1 = fork();
f2 = fork();
f3 = fork();

printf()