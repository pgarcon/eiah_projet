#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int args,char* argv[]) {
    srand(80);
    sleep(rand() % 20);
    exit(3);
}