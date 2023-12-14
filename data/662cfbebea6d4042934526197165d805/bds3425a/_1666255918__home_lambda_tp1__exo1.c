#include <stdio.h> 
#include <time.h>
#include <unistd.h>

int main(int argc, char * arg[]) {

time_t t = time(NULL);

printf("%s\n",ctime(&t));
}