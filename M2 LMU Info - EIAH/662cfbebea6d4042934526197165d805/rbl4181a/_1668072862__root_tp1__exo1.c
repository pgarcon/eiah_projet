#include <stdio.h>

int main(int nbp, char* par[]){
	int i ;
	printf("Jai recu %l params", nbp);
	i = 1;
	while(par[i] != NULL){
		printf("le maram numero %d est %s\n", i, par[i]);
		i++;
	}
}
