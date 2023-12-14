# include <sys/types.h>
# include <unistd.h>
#include <time.h>
#include <stdio.h>


void main(void){
time_t t;
t=time(NULL);
printf("date :%s\n",ctime(t));
printf("ID :%d\n",getuid());
}
