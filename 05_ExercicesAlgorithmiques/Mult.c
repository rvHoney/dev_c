#include <stdio.h> 
#include <stdlib.h>

int main ()
{
	int n, nb, res, i = 1;
	char car;
	
	do
	{
		system("clear");	
		printf("Choisissez un nombre pour afficher sa table de multiplication : ");
		scanf("%d", &n);
		printf("Jusqu'où souhaitez vous aller ? ");
		scanf("%d", &nb);
	
		printf("*****\n");
		printf("Tablde des %d :\n", n);
		
		do
		{
			res = i*n;
			printf("%d*%d=%d\n", i, n, res);
			i++;
		}
		while(i <= nb);
		i = 0;
		printf("*****\n");

		printf("Souhaitez-vous relancer le programme (O/N) ? ");
		scanf("%s", &car);
	}
	
	while( car == 'o' || car == 'O');
}
