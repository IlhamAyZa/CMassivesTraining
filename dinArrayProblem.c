#include <stdio.h>

int main(int argc, char const* argv[])
{
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

	return 0;
}