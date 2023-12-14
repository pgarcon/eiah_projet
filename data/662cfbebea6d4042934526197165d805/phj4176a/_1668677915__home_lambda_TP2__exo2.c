#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>




int main() {
    int rdm = rand() + 1;
    
    printf("%d\n",rdm);
}