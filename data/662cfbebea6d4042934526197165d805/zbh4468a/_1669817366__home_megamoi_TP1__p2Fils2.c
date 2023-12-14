# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int main (int nbParam, char * parametre[]){
    int v = 10, hexNb;
    
    switch(nbParam){
        case 2:
            sscanf(parametre[1], "%d\n", &hexNb);
            exit(1);
        default:
            printf("Error au niveau du nombre de parametres !!!!!!!!!!!!!!!!!");
    }
    
    printf("\n***fils2 --> PID= %d\n", getpid());     
    printf("***fils2 --> tabParam[1]= %d\n", nbre);
    
    * (int *) NULL = v;
}