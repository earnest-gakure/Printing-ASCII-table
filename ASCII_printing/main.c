
#include <stdio.h>

void printBinary(int num) {
    if (num == 0) {
        printf("00000000");
        return;
    }

    int binary[8] = {0};
    int index = 7;

    while (num > 0) {
        binary[index] = num % 2;
        num /= 2;
        index--;
    }

    for (int i = 0; i < 8; i++) {
        printf("%d", binary[i]);
    }
}

int main() {
    printf("ASCII Table\n");
    printf("----------------------------------------------\n");
    printf("Character Name |    Decimal |    Binary         |  Hexadecimal\n");
    printf("----------------------------------------------\n");

    for (int i = 0; i <= 127; i++) {
        printf("%7c        |     %d         |  ", i, i);
        printBinary(i);
        printf("           |  %02X\n", i);
    }

    return 0;
}
