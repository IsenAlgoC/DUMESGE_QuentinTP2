#include <stdlib.h>
#include <stdio.h>

int main() {

	// Déclaration des variables 

	unsigned long int annee = 0;
	printf("Donnez une année inférieur à 10 000 : ");
	scanf_s("%d", &annee);

	// On teste si l'année est séculaire

	if ((annee % 100) != 0) {
		//L'année n'est pas séculaire alors on teste si l'année est bissextile
		if ((annee % 4) == 0) {
			printf("\nIl s'agit d'une année bissextile.");
		}
	}
	else if ((annee % 400) == 0) {
		//Il s'agit d'une année séculaire qui apparait tout les 400 ans donc bissextile
		printf("\nIl s'agit d'une année bissextile.");
	}
	else {
		printf("\nCe n'est pas une année bissextile.");
	}
	return(EXIT_SUCCESS);
}

int MéthodeAlternative() {
	// Sans les if...else imbriqué 

	unsigned long int annee = 0;

	if (((annee % 400) == 0) || (((annee % 4) == 0) && ((annee % 100) != 0))) {    //soit annee est une année séculaire qui apparait tout les 400 ans, soit ce n'est pas une année séculaire mais est divisible par 4
		printf("\nIl s'agit d'une année bissextile.");
	}
	else {
		printf("\nCe n'est pas une année bissextile.");
	}
	return(EXIT_SUCCESS);
}