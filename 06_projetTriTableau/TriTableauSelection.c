#include <stdio.h>
#include <stdlib.h>

// Initialisation
int id_search(long int* socialID, int nbMembers, long int idSearch);
void selection_sort(long int* socialID, int nbMembers);
void print_array(long int* array, int size);


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
	printf("Le numéro existe ? => %ld\n", res);

	selection_sort(socialID,nbMembers);	
	print_array(socialID, nbMembers);
	
	free(socialID);
	
	return 0;
}

// Trie les numéros de sécurité sociale par ordre croissant
void selection_sort(long int* socialID, int nbMembers)
{
	int process, smaller, i;
	long int temp;
	
	for(process=0; process<nbMembers-1; process++)
	{
		smaller = process;
		
		for(i=process; i<nbMembers; i++)
			if(socialID[i]<socialID[smaller])
				smaller = i;
				
		temp = socialID[process];
		socialID[process] = socialID[smaller];
		socialID[smaller] = temp;
	}
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

// Afficher lignes par lignes
void print_array(long int* array, int size)
{
	for(int i=0; i<size; i++)
	{
		printf("%d)%ld \n", i, array[i]);
	}
}
