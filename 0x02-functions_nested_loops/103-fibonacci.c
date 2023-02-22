#include <stdio.h>

/**
 * main - Finds and prints the sum of the even-valued terms in the
 *        Fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int current = 1;
	long int next = 2;
	long int sum = 2; /* 2 is already an even number in the sequence */

	for (i = 2; next <= 4000000; i++)
	{
		long int temp = next;
		next += current;
		current = temp;

		if (next % 2 == 0)
		{
			sum += next;
		}
	}

	printf("%ld\n", sum);

	return (0);
}

