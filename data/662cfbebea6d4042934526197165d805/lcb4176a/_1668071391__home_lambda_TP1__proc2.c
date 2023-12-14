#include <stdio.h>
#include <unistd.h>
int main(){
    printf("bouboule\n");
    execl("./p2fils1","12",NULL);
}