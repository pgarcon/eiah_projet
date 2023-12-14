
#include <sys/types.h> 
#include <unistd.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <time.h>  


int main(void){

	time_t t;
	struct tm instant;
	
	time(&t);
	instant=*localtime($t)

	printf("%s\n", ctime($t));
	return 0;
}
