#include <stdio.h>
#include <time.h>
void main (){
	time_t t;
	t=time(null);
	printf("%s\n"ctime(&t));
}
