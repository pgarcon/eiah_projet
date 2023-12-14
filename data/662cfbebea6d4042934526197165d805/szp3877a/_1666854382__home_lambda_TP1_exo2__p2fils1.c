/* TDM1 - Exercice 2 */

/* traitement du fils1 */

# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int main(char * chaine)
{
    
printf("\n***fils1 --> PID= %d\n", getpid());
printf("***fils1 --> chaine= %c\n");     
exit(3);

}
