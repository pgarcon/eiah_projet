#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    
    pid_t idProc;
    int err;
    
    idProc = fork();
    switch (idProc){
        case -1 : 
            perror("echec fork"); 
            exit(1);
        case 0  :
            err = execl("p2fils1","theo barat"NULL);
            if (err == -1){
                perror("echec execl");
                exit(2);
            }
    }
}