#include <stdio.h>
#include <time.h>
#include <unistd.h>

uid_t getuid(void);

time_t t;

t=time(NULL);

printf("%s\n", ctime(&t));
printf("UID: %d\n", getuid());

