#include <stdio.h>

// Déclaration de la fonction main avec pour argument un entier "argc" et une chaine de caractères "argv".
int main(int argc, char* argv[]) {
	// Condition : Si argc est différent de 3 alors : exécuter la ligne 7 puis la ligne 8.
	if (argc !=3) {
		// Retourne : Usage "valeur de "argv[0]".
		printf("Usage: %s <firstname> <lastname> \n",argv[0]);
		return -1;
	}
	// Condition : Si si "argc" n'est pas "!= de 3" donc si "argc = 3".
	else {
		// Retourne : You're name is "valeur de argv[1]" "valeur de argv[2]".
		printf("You're name is %s %s\n",argv[1],argv[2]);
	}
	// Fin du bloc d'instructions.
	return 0;
}
