#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int args,char* argv[]) {
    srand(80);
    int sleepTime = rand() % 20;
    printf("I %d will sleep %d secondes \n",getpid(), sleepTime);
    sleep(sleepTime);
    exit(3);
}