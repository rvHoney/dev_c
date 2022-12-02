#include <stdio.h> 
#include <stdlib.h>

// Fonction permettant le calcul de la factorielle.
int fact ()
{
	int result = 1, choiceFact, compFact = 1;
	char car;
	
	do
	{
		printf("Choisissez un nombre pour afficher sa factorielle :  ");
		scanf("%d", &choiceFact);
		printf("*****\n");
		
		while(compFact <= choiceFact)
		{
			result = result * compFact;
			compFact++;
		}
		printf("La factorielle de %d est %d.\n", choiceFact, result);
		printf("*****\n");

		printf("Souhaitez-vous relancer le programme (O/N) ? ");
		scanf("%s", &car);
	}
	
	while( car == 'o' || car == 'O');
}

// Fonction permettant l'affichage d'une table de multiplication.
int mult()
{
	int choosedMult, limitMult, result, i = 1;
	char car;
	
	do
	{	
		printf("Choisissez un nombre pour afficher sa table de multiplication : ");
		scanf("%d", &choosedMult);
		printf("Jusqu'où souhaitez vous aller ? ");
		scanf("%d", &limitMult);
	
		printf("*****\n");
		printf("Tablde des %d :\n", choosedMult);
		
		do
		{
			result = i*choosedMult;
			printf("%d*%d=%d\n", i, choosedMult, result);
			i++;
		}
		while(i <= limitMult);
		i = 0;
		printf("*****\n");

		printf("Souhaitez-vous relancer le programme (O/N) ? ");
		scanf("%s", &car);
	}
	
	while(car == 'o' || car == 'O');
	
	return 0;
}

// Main.
int main(){
	char choice;
	char car = '1';
	
	do
	{
		system("clear");
		printf("Que souhaitez vous faire : 1.Factorielle | 2.Multiplication -> ");
		scanf("%s", &choice);
		switch(choice)
		{
		case '1':
			fact();
			break;
		case'2':
			mult();
			break;
		default:
			// Bloc d'instructions
			printf("Fin du programme\n");
				
		}
	}
	while(choice == '1' || choice == '2');

	return 0;
}
