#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
	srand(time(NULL));
	unsigned long int victoire = rand();
	unsigned long int valJoueur = 0;
	unsigned int compteur = 1;

	//Le jeu du juste prix !
	printf("Essaye de deviner à quel nombre entier je pense :p \nVas-y tente ta chance : ");
	scanf_s("%ld", &valJoueur);
	while (valJoueur != victoire) {
		if (valJoueur < victoire) {
			printf("Trop petit. \nNouvelle essai : ");
		}
		else {
			printf("Trop grand. \nNouvelle essai : ");
		}
		scanf_s("%ld", &valJoueur);
		compteur += 1;
	}
	printf("Bravo ! Tu as deviné en %d essais.", compteur);

	return(EXIT_SUCCESS);
}