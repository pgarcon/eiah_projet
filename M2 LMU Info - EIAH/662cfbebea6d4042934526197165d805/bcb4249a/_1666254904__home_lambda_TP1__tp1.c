#include <stdio.h>
#include <time.h>
# include <sys/types.h>
# include <unistd.h>

int main(){
    
    pid_t idProc;
    time_t t;
    idProc = fork();
    
    
    t=time(idProc);
    printf("%s\n",ctime(&t));
    

}
