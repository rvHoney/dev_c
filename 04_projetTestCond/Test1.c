// Ce programme vérifie si un nombre est pair ou impair.

#include <stdio.h> // Inclusion de la bibliotèque d'entré -sortie standard pour l'usage des fonctions printf et scanf.
int main() // Déclaration de la fonction "main" de type "int".
{
	int num; // Déclaration de la variable "num" de type "int"
		
	printf("Enter an integer: "); // Affiche le texte "Enter an integer: ".
	scanf("%d",&num); // Récupère la valeur entière saisie par l'utilisateur.
		
	if(num%2 == 0) // Si le nombre de l'utilisateur divisé par deux n'a pas de reste le bloc s'exécute.
			printf("%d is an even number", num); // Affiche le texte "Le_nombre_de_lutilisateur is an even number".
	else // Sinon, si num/2 a un reste le bloc s'exécute.
		printf("%d is an odd number", num); // Affiche le texte "Le_nombre_de_lutilisateur is an odd number".
		
return 0;
}
