#include <sys/types.h>
#include <unistd.h>

void main(){
	pid_t ret;
	int i, j=0;
for (i=0; i<8; i++)
	i = i + j;
	ret = fork();
printf(ret);
}