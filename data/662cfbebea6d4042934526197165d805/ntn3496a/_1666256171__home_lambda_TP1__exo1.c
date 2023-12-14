#include <stdio.h> 
#include <time.h>
#include <unistd.h>

pid_t idProc;

idProc = fork();

switch (idProc ) {
    case -1 :
        perror("echec fork"); 
        exit(1);
        break;
    case 0 : 
        
        exit(0);
        break;
}
int main(int argc, char * arg[]) {

time_t t = time(NULL);

printf("%s\n",ctime(&t));
}