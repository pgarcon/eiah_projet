#include <stdio.h>

int main(int nbp, char* par[]){
	int i ;
	printf("Jai recu %d params\n", nbp);
	i = 1;
	while(par[i] != NULL){
		printf("le param numero %d est %s\n", i, par[i]);
		i++;
	}
}
