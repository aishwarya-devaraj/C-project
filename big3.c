#include <stdio.h>
#include <stdlib.h>

int biggest3() {
	double num1, num2, num3;

	printf("Enter three numbers");

	if (scanf("%lf %lf %lf", &num1, &num2, &num3) != 3) {
		printf("Invalid input. Please enter numeric values only.\n");
		return 1;
	}

	double largest;

	if (num1 >= num2 && num1 >= num3) {
		largest = num1;
	} else if (num2 >= num1 && num2 >= num3) {
		largest = num2;
	} else {
		largest = num3;
	}
	 printf("The largest number is: %.21f\n", largest);
	 return 0;

}

