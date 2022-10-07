#include <stdio.h>
int main() {
	int num, sum;
	
	printf("Enter one number: ");
	
	//Storing user input into variable num
	scanf("%d", &num);
	
	//Adding two input numbers
	sum = num * num;
	
	printf("Square of %d is %d\n", num, sum);
	return 0;
}
