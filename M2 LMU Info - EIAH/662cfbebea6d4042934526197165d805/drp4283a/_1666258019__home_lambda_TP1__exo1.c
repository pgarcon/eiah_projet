#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
    printf("date: %s uid: %s \n",time(NULL),getuid(void)));
}