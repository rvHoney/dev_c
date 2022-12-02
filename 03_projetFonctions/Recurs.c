#include <stdio.h>
// Déclaration d'un fonction "myFunction" de type "void" avec pour paramètre "value" de type "int". Cette fonction est une boucle qui ajoute +1 au paramètre tant qu'il est inférieur à 100.
void myFunction(int value) {
	// Affiche la valeur de "value"
	printf("%d\n",value);
	// Condition : Si "value" inférieure à 100 alors executer le bloc d'instructions ci dessous
	if(value < 100) {
		// Appeller la fonction en ajoutant 1 à "value" (le paramètre)
		myFunction(value+1);
	}
	
	return;
}

// Déclaration de la fonction main
int main() {
	// On appelle la fonction main avec pour argument "value = 0"
	myFunction(0);
	return 0;
}
