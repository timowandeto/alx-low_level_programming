#include <stdio.h>

int main() {
    int i;

    // Print lowercase alphabet
    for (i = 97; i <= 122; i++) {
        putchar(i);
    }

    // Print newline
    putchar('\n');

    // Print alphabet without 'q' and 'e'
    for (i = 97; i <= 122; i++) {
        if (i != 101 && i != 113) {
            putchar(i);
        }
    }

    // Print newline
    putchar('\n');

    return 0;
}

