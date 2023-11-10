/* TDM1 - Exercice 2 */

/* traitement du fils2 */

# include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int traitFils2(int nb)
{
printf("\n***fils2 --> PID= %d\n0x%08.8X  %s", getpid(), nb, nb);

exit(3)
}
