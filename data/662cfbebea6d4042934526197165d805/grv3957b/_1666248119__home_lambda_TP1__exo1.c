#include <stdio.h>
#include <time.h>

int main(void){
    printf("Today is %s", ctime(&now));
}