# include <sys/types.h>
# include <unistd.h>
#include <time.h>
#include <stdio.h>


int main(){
time_t t;
t=time(NULL);
printf("%s\n",ctime(t));
int i = uid_t getuid(void);
printf("%d",i);
}
