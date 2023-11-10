#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

void traitFils1();

int main()
{
    
}


idProc = fork();
switch(idProc)
{
    case -1:
    perror("echec fork");
    exit(1);
    
    case 0:
    traitFils1();
    exit(1);
}




void traitFils1()
{
    
}