#include <stdio.h>

float AverageTwoNumbers(float num1, float num2) {
	float avg;
	
	avg = (num1+num2)/2;
	
	return avg;
}


int main() {
	int num1, num2;
	float avg;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);

	avg = AverageTwoNumbers(num1, num2);
	
	//%.2f is used for displaying output upto two decimal places
	printf("Average of %d and %d is: %.2f\n",num1,num2,avg);
	
	return 0;
}
