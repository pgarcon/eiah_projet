#include <stdio.h>

int main( int argc, char *argv[] )
{
    printf("\n%s\n", argv[0]);
    printf("PID= %d\n", getpid());
    printf("%s\n", argv[1]);
    exit(3);
}