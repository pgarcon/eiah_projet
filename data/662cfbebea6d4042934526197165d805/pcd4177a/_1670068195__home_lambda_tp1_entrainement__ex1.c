#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>



time_t t = time(NULL);

uid_t getuid(void);

printf("Yo %s\n", ctime(&t));
printf("UID: %d\n", getuid());

