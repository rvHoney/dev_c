#include <stdio.h> 
#include <stdlib.h>

int fact(int num)
{
	int fact, res;
	res = fact = 1;
	
	while(fact <= num)
	{
		res = res * fact;
		fact++;
	}
	
	return res;
}
	
int main()
{
	int num, res, loop;
	char car;
	
	do
	{
		system("clear");
		printf("Saisir un nombre pour afficher sa factorielle : ");
		scanf("%d", &num);
	
		res = fact(num);
		printf("La factorielle de %d est %d\n", num, res);
	
		printf("Souhaitez-vous relancer le programme (O/N) ? ");
		scanf("%s", &car);
		
	}
	while( car == 'o' || car == 'O');
	
	return 0;
}
