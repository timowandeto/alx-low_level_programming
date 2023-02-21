#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    write(1, "putchar\n", 8);
    return (0);
}

