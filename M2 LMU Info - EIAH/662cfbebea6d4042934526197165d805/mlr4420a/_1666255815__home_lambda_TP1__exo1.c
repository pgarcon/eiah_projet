#include <stdio.h>
#include <time.h>

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