#include <stdio.h>

int biggest3();
int factorial(int n);

int main() {
	biggest3();
	
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	printf("Factorial of %d is %d\n",n, factorial(n));

	return 0;
}
