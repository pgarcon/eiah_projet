#include <stdio.h>

int main( int argc, char *argv[] )
{
    printf("\n%s\n", argv[0]);
    printf("nPID= %d\n", getpid());
    printf("%f\n", argv[1]);
    printf("%x\n", argv[1]);
    exit(3);
}