#include <stdio.h>
#include <time.h>

time_t t;
t = time(NULL);

printf("%s\n",ctime(&t));

void main(void)
{
  int h, min, s, day, mois, an;
  time_t now;
    
  // Renvoie l'heure actuelle
  time(&now);
  // Convertir au format heure locale
  printf("Aujourd'hui est : %s", ctime(&now));
  
  return;
}