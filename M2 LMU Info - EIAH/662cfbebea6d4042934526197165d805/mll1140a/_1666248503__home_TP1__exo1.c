#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
    int h, min, s, day, mois, an;
    time_t now;
    
    time($now);
    
    printf("Aujourd'hui c'est : %s", ctime($now));
    
    return 0;
}