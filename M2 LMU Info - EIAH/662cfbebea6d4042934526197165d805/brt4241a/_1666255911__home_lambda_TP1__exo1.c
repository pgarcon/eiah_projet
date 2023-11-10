#include <stdio.h>
#include <time.h>
#include <unistd.h>

void main() {
    time_t t;
    t=time(NULL);
    printf("%s\n",ctime(&t));
    printf("%x", getuid());
}
