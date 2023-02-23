#include <stdio.h>

/**
 * Finds and prints the largest prime factor of the number 612852475143.
 *
 * Returns:
 *     0 on successful execution
 */
int main(void)
{
    long num = 612852475143;
    long largest_prime_factor = 0;

    while (num % 2 == 0)
    {
        largest_prime_factor = 2;
        num /= 2;
    }

    for (long i = 3; i * i <= num; i += 2)
    {
        while (num % i == 0)
        {
            largest_prime_factor = i;
            num /= i;
        }
    }

    if (num > 2)
    {
        largest_prime_factor = num;
    }

    printf("%ld\n", largest_prime_factor);

    return 0;
}

