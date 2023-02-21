#include <unistd.h>

void print_combinations(int num, int count) {
  if (count > 0) {
    print_combinations(num * 10, count - 1);
  } else {
    while (num > 0) {
      int digit = num % 10;
      num /= 10;
      putchar(digit + '0');
      if (num > 0) {
        putchar(',');
        putchar(' ');
      }
    }
    putchar('\n');
  }
}

int main(void) {
  for (int i = 0; i < 10; i++) {
    print_combinations(i, 3);
  }
  return 0;
}

