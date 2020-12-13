#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int puissance(int a, int b) {
	int aEb = a;
	for (int k = 1; k < b; k++) {
		aEb = aEb * a;
	}
	return(aEb);
}

int main() {
	int n = 100;

	// Calcul de la somme des n premiers entiers avec une boucle While

	int somme1 = 0;
	printf("Avec une boucle While, la somme des %d elements vaut : ", n);
	int CompteurWhile = 1;
	while (CompteurWhile < n + 1) {
		somme1 += CompteurWhile;
		CompteurWhile++;
	}
	printf("%d \n", somme1);

	// Calcul de la somme des n premiers entiers avec une boucle Do...While

	int somme2 = 0;
	printf("Avec une boucle Do...While, la somme des %d elements vaut : ", n);
	int CompteurDoWhile = 1;
	do {
		somme2 += CompteurDoWhile;
		CompteurDoWhile++;
	} while (CompteurDoWhile < n + 1);
	printf("%d \n", somme2);

	// Calcul de la somme des n premiers entiers avec une boucle For

	int somme3 = 0;
	printf("Avec une boucle For, la somme des %d elements vaut : ", n);
	for (int CompteurFor = 1; CompteurFor < n + 1; CompteurFor++) {
		somme3 += CompteurFor;
	}
	printf("%d \n", somme3);

	// On cherche désormais la plus grande valeur de n pour laquelle somme peut être mémorisé en unsigned short int

	int k = 0;
	unsigned short int somme4 = 0;
	while ( puissance(2,16) - (k + 1) >= somme4) {
		k++;
		somme4 += k;
	}
	printf("La valeur maximale de n pour que la somme des n premiers entiers puisse être stocker en tant que unsigned short int vaut : %d \n", k);

	// à present, l'utiliseur donne la valeur de n 

	int p = 0;
	int somme5 = 0;
	scanf_s("Valeur de n : %d", &p);
	for (int i = 1; k < p + 1; i++) {
		somme5 += i;
	}
	printf("La somme des %d premiers entiers vaut : %d \n", p, somme5);
	
	system("pause");

	// Si la valeur donnée est trop grande alors on redemande jusqu'à ce qu'elle soit assez petite

	int q = 1000;
	unsigned short int somme6 = 0;
	printf("Donner une valeur pour n avec comme condition que la somme des n premiers entiers soit un unsigned short int.");
	while (q > 361) {
		scanf_s("\nValeur de n : %d", &q);
	}
	for (int i = 1; k < q + 1; i++) {
		somme6 += i;
	}
	printf("La somme des %d premiers entiers vaut : %d \n", q, somme6);

	return(EXIT_SUCCESS);
}

