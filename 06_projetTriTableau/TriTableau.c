#include <stdio.h>
#include <stdlib.h>

// Initialisation
int id_search(long int* socialID, int nbMembers, long int idSearch);

// Main
int main()
{
	long int* socialID = NULL;
	long int idSearch, res;
	int nbMembers = 10;
	
	socialID = malloc(sizeof(long int)*nbMembers);
	
	socialID[0] = 555555555555555;
	socialID[1] = 444444444444444;
	socialID[2] = 222222222222222;
	socialID[3] = 333333333333333;
	socialID[4] = 666666666666666;
	socialID[5] = 000000000000000;
	socialID[6] = 111111111111111;
	socialID[7] = 999999999999999;
	socialID[8] = 888888888888888;
	socialID[9] = 777777777777777;
	
	printf("Quel numéro de sécurité sociale voulez-vous rechercher ?\n=> ");
	scanf("%ld", &idSearch);
	
	res = id_search(socialID, nbMembers, idSearch);
	printf("=> %ld\n", res);
	
	free(socialID);
		
	return 0;
}

// Recherche de numéro de sécurité sociale
int id_search(long int* socialID, int nbMembers, long int idSearch)
{
	int i;
	for(i=0; i<nbMembers; i++)
	{
		if(idSearch == socialID[i])
			return 1;
	}
	return 0;
}
