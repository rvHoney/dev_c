#include <stdio.h>

int main(){
	int goalNb, playerNb, loop;
	
	loop = 1;
	goalNb = 31;
	
	while(loop) {
		printf("Choisissez un nombre entier compris entre 1 & 100 : ");
		scanf("%d", &playerNb);
	
		if (playerNb == goalNb) {
			printf("Félicitations, %d était le chiffre à deviner !\n", goalNb);
			loop = 0;
		}
		else if (playerNb > goalNb) {
			printf("Votre nombre est trop grand.\n");
		}
		else
			printf("Votre nombre est trop petit.\n");
	}

	return 0;
}
