#include <stdlib.h>
#include <stdio.h>

int main() {

	// D�claration des variables 

	unsigned long int annee = 0;
	printf("Donnez une ann�e inf�rieur � 10 000 : ");
	scanf_s("%d", &annee);

	// On teste si l'ann�e est s�culaire

	if ((annee % 100) != 0) {
		//L'ann�e n'est pas s�culaire alors on teste si l'ann�e est bissextile
		if ((annee % 4) == 0) {
			printf("\nIl s'agit d'une ann�e bissextile.");
		}
	}
	else if ((annee % 400) == 0) {
		//Il s'agit d'une ann�e s�culaire qui apparait tout les 400 ans donc bissextile
		printf("\nIl s'agit d'une ann�e bissextile.");
	}
	else {
		printf("\nCe n'est pas une ann�e bissextile.");
	}
	return(EXIT_SUCCESS);
}

int M�thodeAlternative() {
	// Sans les if...else imbriqu� 

	unsigned long int annee = 0;

	if (((annee % 400) == 0) || (((annee % 4) == 0) && ((annee % 100) != 0))) {    //soit annee est une ann�e s�culaire qui apparait tout les 400 ans, soit ce n'est pas une ann�e s�culaire mais est divisible par 4
		printf("\nIl s'agit d'une ann�e bissextile.");
	}
	else {
		printf("\nCe n'est pas une ann�e bissextile.");
	}
	return(EXIT_SUCCESS);
}