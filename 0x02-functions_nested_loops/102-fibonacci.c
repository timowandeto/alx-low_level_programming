#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int current = 1;
	long int next = 2;
	long int sum;

	printf("%ld, %ld", current, next);

	for (i = 2; i < 50; i++)
	{
		sum = current + next;
		printf(", %ld", sum);
		current = next;
		next = sum;
	}

	printf("\n");

	return (0);
}

