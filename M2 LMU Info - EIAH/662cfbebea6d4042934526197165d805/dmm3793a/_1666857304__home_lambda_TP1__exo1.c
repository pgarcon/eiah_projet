#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


void main()
{
    time_t t=time(NULL);
    
    printf("\nJe suis : %s et mon UID est :  %d\n",getlogin(),getuid());
    printf("Nous sommes le : %s\n",ctime(&t));
    
}
