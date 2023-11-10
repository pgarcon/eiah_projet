
/* Gestion des processus sous Linux */ /* TDM1 - Exercice 1 */ 
#include <sys/types.h> 
#include <unistd.h> 
#include <stdlib.h> 
#include <stdio.h> 
#include <time.h>  

time_t t;
struct tm instant;

time(&t);
instant=*localtime($t)

printf("%s\n", ctime($t));
