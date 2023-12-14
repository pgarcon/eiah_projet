#include <sys/types.h> 
#include <unistd.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <time.h>  


int main(void){

	time_t t;
	
	
	time(&t);
	

	printf("Current time = %s\n", ctime($t));
	return 0;
}
