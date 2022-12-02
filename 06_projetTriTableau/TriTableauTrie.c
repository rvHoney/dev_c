#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Initialisation
int id_search(long int* socialID, int nbMembers, long int idSearch);
void bubble_sort(long int* socialID, int nbMembers);

// Main
int main()
{
	system("clear");
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

	bubble_sort(socialID, nbMembers);
	
	res = id_search(socialID, nbMembers, idSearch);
	printf("Le numéro existe ? => %ld\n", res);
	
	free(socialID);
	
	return 0;
}

// Trie les numéros de sécurité sociale par ordre croissant
void bubble_sort(long int* socialID, int nbMembers)
{
    int passage = 0;
    bool permutation = true;
    int process;
   
    while (permutation) {
        permutation = false;
        passage ++;
        for (process=0;process<nbMembers-passage;process++)
        {
            if (socialID[process]>socialID[process+1])
            {
                permutation = true;
                // on echange les deux elements
                long int temp = socialID[process];
                socialID[process] = socialID[process+1];
                socialID[process+1] = temp;
            }
        }
    }
}

// Recherche de numéro de sécurité sociale
int id_search(long int* socialID, int nbMembers, long int idSearch)
{
	int i, first = 0, last = nbMembers-1, middle = nbMembers/2;
	
	while(first<=last)
	{
		middle = (first+last)/2;
		if(socialID[middle]==idSearch)
			return 1;
		else
		{
			if(socialID[middle]>idSearch)
				last = middle-1;
			else
				first = middle+1;
		}
	}
	return 0;
}
