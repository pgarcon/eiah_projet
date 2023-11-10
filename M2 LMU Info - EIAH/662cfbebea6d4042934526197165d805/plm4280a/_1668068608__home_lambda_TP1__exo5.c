#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <wait.h>
#include <string.h>

void chercher(int nbp, char * argv[]);

int main (){

	printf ("je suis %s\n", argv[0]);
	printf("la chaine cherche est : %s\n", argv[1]);
	$i := 0;
	while (argv[i+2] != NULL){
		printf("Le fichier  %d est %s\n", i, argv[i+2]);
		i++;
	}
}

