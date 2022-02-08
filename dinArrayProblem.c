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
	/*
	double* arrOfFrx;
	int num, num1, num2;

	printf("Enter amount of numbers in massive: ");
	scanf("%d", &num);

	arrOfFrx = (double*)malloc(num * sizeof(double));

	for (int i = 0; i < num; i++)
	{
		num1 = (rand() % 200) - 100;
		num2 = 10 * (rand() % num1);

		arrOfFrx[i] = (num2 + 0.0) / (num1 + 0.0);

	}

	for (int i = 0; i < num; i++)
	{
		printf("%.3f ", arrOfFrx[i]);

	}

	printf("\n\n");

	num1 = 2 * num;

	arrOfFrx = (double*)realloc(arrOfFrx, num1 * sizeof(double));

	for (int i = num; i < num1; i++)
	{
		arrOfFrx[i] = 1;
	}

	for (int i = 0; i < num1; i++)
	{
		printf("%.3f ", arrOfFrx[i]);

	}
	*/

	//3 

	float* vector1;
	float* vector2;
	int num1, num2;

	printf("Enter amount of elements in vector #1 : ");
	scanf("%d", &num1);

	vector1 = (float*)malloc(num1 * sizeof(double));

	for (int i = 0; i < num1; i++)
	{
		printf(": ");
		scanf("%f", &vector1[i]);
	}

	printf("Enter amount of elements in vector #2 : ");
	scanf("%d", &num2);

	vector2 = (float*)malloc(num2 * sizeof(double));

	for (int i = 0; i < num2; i++)
	{
		printf(": ");
		scanf("%f", &vector2[i]);
	}

	vector1 = realloc(vector1, (num1 + num2) * sizeof(float));

	for (int i = num1; i < num2 + num1; i++)
	{
		vector1[i] = vector2[i - num1];
	}

	for (int i = 0; i < num1 + num2; i++)
	{
		printf("%.3f ", vector1[i]);
	}
	return 0;
}
