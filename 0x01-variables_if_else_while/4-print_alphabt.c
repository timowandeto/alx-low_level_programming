#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, followed by a new line,
 *              and then prints all letters except 'q' and 'e' using only
 *              the putchar function twice.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

	/* Print lowercase alphabet and alphabet without 'q' and 'e' */
	for (i = 0; i < 26; i++)
	{
		if (alpha[i] != 'e' && alpha[i] != 'q')
		{
			putchar(alpha[i]);
		}
		else
		{
			continue;
		}
	}

	/* Print newline */
	putchar('\n');

	return (0);
}

