#include <stdio.h> // Inclusion de la bibliotèque d'entré-sortie standard pour l'usage des fonctions printf et scanf.
int main() // Déclaration de la fonction "main" de type "int" ne comprenant pas d'arguments.
{
	char nom[100]; // Déclaration de la variable "num" de type "char", un tableau pouvant contenir 100 caractères au maximum.
	float nombre; // Déclaration de la variable "nombre" de type "float".
	
	// Demande le nom de l'utilisateur.
	printf("Quel est votre nom ? ");
	// Stock le nom dans la variable "nom".
	scanf("%s", &nom);
	// Demande un nombre à l'utilisateur.
	printf("Choisissez un nombre : ");
	// Stock le nombre dans la variable "nombre"
	scanf("%f", &nombre);
	
	// Structure conditionnelle exécutant le bloc d'instruction tant le nombre est supérieur à 10 ou inférieur à 1.
	while(nombre > 10 || nombre < 1)
	{
		// Affiche un message d'erreur
		printf("Madame, Monsieur %s : le nombre saisi %.2f n'est pas compris entre 1 et 10.\n", nom, nombre);
		// Demande à nouveau un chiffre
		printf("Choisissez un chiffre : ");
		// Stock la nouvelle valeur dans "nombre"
		scanf("%f", &nombre);
	}
	// Si le bloc ne s'exécute pas ou arrête de s'exécuter alors on affiche :
	printf("Madame, Monsieur %s : le nombre saisi %.2f est compris entre 1 et 10.\n", nom, nombre);
return 0;
}
