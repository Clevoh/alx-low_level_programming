#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 100; i++) {
        for (j = i; j < 100; j++) {
            int tens_i = i / 10;
            int ones_i = i % 10;
            int tens_j = j / 10;
            int ones_j = j % 10;

            putchar('0' + tens_i);
            putchar('0' + ones_i);
            putchar(' ');
            putchar('0' + tens_j);
            putchar('0' + ones_j);

            if (i != 99 || j != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    return 0;
}
