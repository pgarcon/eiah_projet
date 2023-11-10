#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <sys/wait.h>
/* fonction de traitement du fils1 */
/* affiche son pid et se termine normalement en retournant 3 */
int main(int nbParam, char *tabPram[])
{
  char chaine[50+1];

switch (nbParam)
    {
     case 2 :  /* recuperation du parametre 1 */
     		   strncpy(chaine, tabParam[1],50);
               chaine[50]='\0';
    		   break;
        
     default : printf("***fils1 --> nombre de parametres incorrect!!!");
     		   exit(1);
     }
     
printf("\n***fils1 --> PID= %d\n", getpid());
printf("***fils1 -->tabParam[1]= %s\n", chaine);     
exit(3);
}