#include <stdio.h>
#include <time.h>
#include <unist.h>








int main(void){
    int h,min,j, mois, an;
    time_t now;
    time(&now);
    printf("%s", ctime(&now));
 
 struct tm *local =localtime(&now);
 h=local->tm_hour;
 min=local->tm_min;
 j=local ->tm_mday; 
 mois=local->tm_mon +1;
 an = local -> tm_year +1900;
 printf("heure : %02d:%02d:%02\n", h,min);
 printf("date : %02d/%02d%d\n",j,mois, an);
 return 0;
}