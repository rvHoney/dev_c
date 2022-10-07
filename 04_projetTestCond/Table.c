#include <stdio.h> // Inclusion de la bibliotèque "standard input-output" pour l'utilisation des fonctions printf et scanf.

int main() // Déclaration de la fonction main n'ayant pas d'arguments et renvoyant un entier.
{
	int t1, t2, res; // Déclaration de 3 variables entières "t1", "t2" et "res".
	t1 = t2 = 1; // Affectation de la valeur 1 à "t1" et "t2"
	
	while(t2 <= 9) // Boucle servant incrémenter le deuxième terme tant qu'il est <= à 9. 
	{
		while(t1 <= 9) // Boucle servant à l'incrémentation du premier terme tant qu'il est inférieur ou égal à 9. 
		{
			res = t1 * t2; // Calcul de "res" le produit de "t1" par "t2".
			t1++; // Incrémentation de "t1".
			printf("%d ", res); // Affichage du résultat.
		}
		t1 = 1; // Remise à 1 de "t1".
		t2++; // Incrémentation de "t2".
		printf("\n"); // Saut de ligne.
	}
	return 0;
} 
