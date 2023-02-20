#include <stdio.h>

int main() {
    int i;

    // Print lowercase alphabet
    for (i = 97; i <= 122; i++) {
        putchar(i);
    }

    // Print newline
    putchar('\n');

    // Print uppercase alphabet
    for (i = 65; i <= 90; i++) {
        putchar(i);
    }

    // Print newline
    putchar('\n');

    return 0;
}

