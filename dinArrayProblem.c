#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const* argv[])
{
	//1
	/*
	int num, n1, n2;
	double frx;

	printf("Enter amount of numbers ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("Enter fraction (Example 2 / 3) : ");
		printf("\nNumerator: ");
		scanf("%d", &n1);
		printf("Denominator: ");
		scanf("%d", &n2);
		printf("n1 = %d, n2 = %d \n", n1, n2);
		frx = (n1 + 0.0) / (n2 + 0.0);
		printf("We get : %f \n", frx);
	}
	*/

	//2 

	double* arrOfFrx;
	int num, num1, num2;

	printf("Enter amount of numbers in massive: ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		num1 = (rand() % 200) - 100;
		num2 = (rand() % (9 * num1)) - num1;

		arrOfFrx[i] = (num2 + 0.0) / (num1 + 0.0);

		printf("%.3f ", arrOfFrx[i]);
	}

	return 0;

}
