#include <stdio.h>

int main() {
    // unsigned long stores non-negative integers (up to ~20 digits on 64-bit systems)
    unsigned long num, reversed = 0, temp;

    printf("Enter a number: ");
    scanf("%lu", &num);

    temp = num;

    while (temp) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    if (num == reversed) {
        printf("%lu is a palindrome.\n", num);
    } else {
        printf("%lu is not a palindrome.\n", num);
    }

    return 0;
}
