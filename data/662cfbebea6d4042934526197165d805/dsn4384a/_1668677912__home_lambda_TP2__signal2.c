#include <sys/types.h>
#include <string.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    int r = (rand() %10) +1;
    printf("%d\n", r);
}