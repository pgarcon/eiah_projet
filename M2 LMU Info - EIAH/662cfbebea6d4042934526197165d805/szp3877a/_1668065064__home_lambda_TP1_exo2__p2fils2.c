/* TDM1 - Exercice 2 */

/* traitement du fils2 */

# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int traitFils2(int nbParam, char * tabParam[])
{
int v=10,nbre;

switch (nbParam)
    {
     case 2 : /* conversion du parametre 1 */
     		 sscanf(tabParam[1], "%d",&nbre);
             break;
                     
     default : printf("***fils2 --> nombre de parametres incorrect!!!");
     		   exit(1);
     }
     
printf("\n***fils2 --> PID= %d\n", getpid());     
printf("***fils2 --> tabParam[1]= %d\n", nbre);

*(int *)NULL=v;     

}
