# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int main(){
    pid_t idProc;
    int err, rapport, numSignal, 
    
    char * tabParam[3] = {"p2fils2", "123456", NULL};
    
    idProc = fork();
    switch(idProc){
        case -1:
            perror("Echec idProc !");
            exit(1);
        case 0:
            
    }
}