#include <stdio.h>

// Calc function with two arguments num1 & num2
float AddNumber(float num1, float num2) {
	
	// Return the result of num1 + num2
	return num1 + num2;
}

int main() {
	float num1, num2, sum;
	
	printf("Enter two floating numbers: ");
	
	// Storing user input into variable num1 & num2
	scanf("%f %f", &num1, &num2);
	
	// Put AddNumber(); result in sum
	sum = AddNumber(num1, num2);
	
	printf("Sum of %f and %f is: %f\n", num1, num2, sum);
	return 0;
}
