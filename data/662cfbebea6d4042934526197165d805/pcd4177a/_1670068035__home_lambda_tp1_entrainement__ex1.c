#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

uid_t getuid(void);

time_t t = time(NULL);



printf("%s\n", ctime(&t));
printf("UID: %d\n", getuid());

