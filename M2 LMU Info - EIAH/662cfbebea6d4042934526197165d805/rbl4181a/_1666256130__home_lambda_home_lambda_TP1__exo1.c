#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

time_t t;

//renvoie l'heure actuelle
time(&t);

//convertion heure locale
printf("Date/heure : %s\n",ctime(&t));
printf("%d\n", id);

}
