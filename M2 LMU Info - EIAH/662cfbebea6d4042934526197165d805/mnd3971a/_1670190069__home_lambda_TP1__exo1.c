#include <stdio.h>
#include <time.h>
#include <sys/types.h>
#include <signal.h

void fils1();
void fils2();
void fils3();

int main(){
    fils1();
}

void fils1(){
    time_t t;
    t=time(NULL);
    printf("%s\n",ctime(&t));
}