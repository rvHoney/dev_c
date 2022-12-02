#include <stdio.h>

int main() {
	char firstname[100], lastname[100];
	
	printf("Enter lastname: ");
	scanf("%s", &lastname);
	
	printf("Enter a first name: ");
	scanf("%s", &firstname);
	
	printf("Hello %s %s!\n", &firstname, &lastname);
	
	return 0;
}
