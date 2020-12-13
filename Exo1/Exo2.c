#include <stdlib.h>
#include <stdio.h>

int main() {
	double L = 0;
	double l = 0;
	double h = 0;
	double tmp = 100;
	while (1 > 0) {
		printf("Longueur : ");
		scanf_s("%f", &L);
		printf("\nLargeur : ");
		scanf_s("%f", &l);
		printf("\nHauteur : ");
		scanf_s("%f", &h);

		//On classe correctement les valeurs obtenues telles que Longueur > Largeur > Hauteur 

		if (L < l) {
			tmp = L;
			L = l;
			l = tmp;
		}
		if (l < h) {
			tmp = l;
			l = h;
			h = tmp;
		}
		if (L < l) {
			tmp = L;
			L = l;
			l = tmp;
		}
		if ((L <= 55.f) && (l <= 35.f) && (h <= 25.f)) {
			printf("VALIDE\n");
		}
		else { 
			printf("INVALIDE\n");
		}
	}
}