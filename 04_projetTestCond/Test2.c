#include <stdio.h> // Inclusion de la bibliotèque d'entré -sortie standard pour l'usage des fonctions printf et scanf.
int main() // Déclaration de la fonction "main" de type "int" ne comprenant pas d'arguments.
{
	char nom[100]; // Déclaration de la variable "num" de type "char", un tableau pouvant contenir 100 caractères au maximum.
	float nombre; // Déclaration de la variable "nombre" de type "float".
	
	printf("Quel est votre nom ? "); // Utilisation de la fonction "printf" de la bibliotèque "stdio.h" permettant d'afficher un texte.
	scanf("%s", &nom); // Utilisation de la fonction "scanf" de la bibliotèque "stdio.h" permettant de stocker la saisie de l'utilisateur de type "char" dans la variable "nom".
	printf("Choisissez un chiffre : "); // Utilisation de la fonction "printf" de la bibliotèque "stdio.h" permettant d'afficher un texte.
	scanf("%f", &nombre); // Utilisation de la fonction "scanf" de la bibliotèque "stdio.h" permettant de stocker la saisie de l'utilisateur de type "float" dans la variable "nombre".
	
	
	// Structure conditionnelle vérifiant si le nombre est négatif positif ou nul.
	
	// Utilisation de la structure conditionnelle "if" avec pour paramètre "nombre < 0" permettant d'exécuter le bloc de code si dessous si cette condition est satisfaite.
	if(nombre < 0)
		// Utilisation de la fonction "printf" de la bibliotèque "stdio.h" permettant d'afficher un texte dans lequel nous insérons la valeur de la variable "nom" de type "char" puis la valeur de la variable "nombre" de type "float".
		printf("Madame, Monsieur %s : le nombre saisi %.2f est négatif.\n", nom, nombre);
	// Utilisation de la structure conditionnelle "else if" avec pour paramètre "nombre < 0" permettant d'exécuter le bloc de code si dessous si cette condition est satisfaite.
	else if(nombre > 0)
		// Utilisation de la fonction "printf" de la bibliotèque "stdio.h" permettant d'afficher un texte dans lequel nous insérons la valeur de la variable "nom" de type "char" puis la valeur de la variable "nombre" de type "float".
		printf("Madame, Monsieur %s : le nombre saisi %.2f est positif.\n", nom,
		 nombre);
	// Utilisation de la fonction "else" sans argument permettant d'exécuter le bloc de code si dessous si aucunes des conditions précédentes n'a été satisfaite.
	else
		// Utilisation de la fonction "printf" de la bibliotèque "stdio.h" permettant d'afficher un texte dans lequel nous insérons la valeur de la variable "nom" de type "char" puis la valeur de la variable "nombre" de type "float".
		printf("Madame, Monsieur %s : le nombre saisi %.2f est nul.\n", nom, nombre);
		
	return 0;
}
