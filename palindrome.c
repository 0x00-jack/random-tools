#include <stdio.h>

int main() {
    //memory size = 8bytes; accepts chars of lengths up to 20
    unsigned long num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%lu", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    if (original == reversed) {
        printf("%lu is a palindrome.\n", original);
    } else {
        printf("%lu is not a palindrome.\n", original);
    }

    return 0;
}
