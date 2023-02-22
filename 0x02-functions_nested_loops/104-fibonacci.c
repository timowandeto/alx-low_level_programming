#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2,
 *        separated by comma and followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long int current = 1;
	unsigned long int next = 2;
	unsigned long int sum;

	printf("%lu, %lu", current, next);

	for (i = 3; i <= 98; i++)
	{
		sum = current + next;
		current = next;
		next = sum;

		printf(", %lu", sum);
	}

	printf("\n");

	return (0);
}

