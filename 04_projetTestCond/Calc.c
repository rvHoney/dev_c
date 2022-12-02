#include <stdio.h> // Inclusion de la bibliotèque d'entrée-sortie stdio.h permettant l'utilisation des fonctions printf et scanf.

// Déclaration de la fonction principale sans arguments.
int main(void)
{
	// Déclaration de trois variables de type float.
	float A, B, result;
	
	// Déclaration d'un caractère.
	char car;
	
	// Récupère des entrées de 2 types différents.
	scanf("%f%c%f",&A,&car,&B);
	
	// Structure conditionnelle :
	switch(car)
	{
		case '+': // Si "car" équivaut à "+" alors:
			result=A+B; // Effectuer l'addition de A par B.
			break; // Quitte le switch pour passer à la suite
			
		case '-': // Si "car" équivaut à "-" alors:
			result=A-B; // Effectuer la soustraction de A par B.
			break; // Quitte le switch pour passer à la suite
			
		case '*': // Si "car" équivaut à "*" alors:
			result=A*B; // Effectuer la multiplication de A par B.
			break; // Quitte le switch pour passer à la suite
			
		case '/': // Si "car" équivaut à "/" alors:
			result=A/B; // Effectuer la division de A par B.
			break; // Quitte le switch pour passer à la suite
			
		default: //Si "car" n'est égal à aucune des options précédentes afficher un message d'erreur.
			printf("%c n'est pas un opérateur\n",car);
			break; // Quitte le switch pour passer à la suite
	}
	
	// Afficher le résultat du calcul.
	printf("%f %c %f=%f\n",A,car,B,result);
	
	return 0;
}
			
