/* TDM1 - Exercice 2 */

/* traitement du fils1 */

# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int main(int nbParam, char * tabParam[])
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
