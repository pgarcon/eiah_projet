#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

int h, min, s, day, mois, an;
time_t t;

//rnevoie l'heure actuelle
time(&t);

//convertion heure locale
printf("%s\n",ctime(&t));

}
