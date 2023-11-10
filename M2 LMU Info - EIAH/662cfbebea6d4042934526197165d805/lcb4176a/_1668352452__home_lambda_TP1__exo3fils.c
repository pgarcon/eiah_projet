#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
    printf("PID fils =%d --- PPID fils = %d\n",getpid(),getppid());
    sleep(6);
    printf("PID fils =%d --- PPID fils = %d\n",getpid(),getppid());
    exit(0);
}