#include <sys/types.h> 
#include <unistd.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <time.h>  


int main(){

	time_t t;
	
	
	t=time(NULL);
	

	printf("Current time = %s\n", ctime(&t));
	return 0;
}
