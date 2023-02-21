#include <stdio.h>

int main(void)
{
    printf("Size of char: %ld byte(s)\n", sizeof(char));
    printf("Size of short int: %ld byte(s)\n", sizeof(short int));
    printf("Size of int: %ld byte(s)\n", sizeof(int));
    printf("Size of long int: %ld byte(s)\n", sizeof(long int));
    printf("Size of long long int: %ld byte(s)\n", sizeof(long long int));
    printf("Size of float: %ld byte(s)\n", sizeof(float));
    printf("Size of double: %ld byte(s)\n", sizeof(double));
    printf("Size of long double: %ld byte(s)\n", sizeof(long double));

    return 0;
}
Size of char: 1 byte(s)
Size of short: 2 byte(s)
Size of int: 4 byte(s)
Size of long: 4 byte(s)
Size of long long: 8 byte(s)
Size of float: 4 byte(s)
Size of double: 8 byte(s)
Size of long double: 12 byte(s)

Size of char: 1 byte(s)
Size of short: 2 byte(s)
Size of int: 4 byte(s)
Size of long: 8 byte(s)
Size of long long: 8 byte(s)
Size of float: 4 byte(s)
Size of double: 8 byte(s)
Size of long double: 16 byte(s)

