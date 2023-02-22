#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued terms in the Fibonacci sequence
 *        up to a limit of 4,000,000
 *
 * Return: Always 0.
 */
int main(void)
{
	long int current = 1;
	long int next = 2;
	long int sum = 0;
	long int temp;

	while (current <= 4000000)
	{
		if (current % 2 == 0)
			sum += current;
		temp = current;
		current = next;
		next += temp;
	}

	printf("%ld\n", sum);

	return (0);
}

