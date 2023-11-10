#include <stdio.h>

int main(int nbp, char* par[]){
	int i ;
	printf("je suis %s\n", par[0]);
	printf("Jai recu %d params\n", nbp);
	i = 1;
	while(par[i] != NULL){
		
		i++;
	}
}
