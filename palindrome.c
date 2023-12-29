#include <stdio.h>

int main() {
    int a, b = 0, c, r;

    printf("Enter an integer: ");
    scanf("%d", &a);

    c = a;

    for (; a != 0; a /= 10) {
        r = a % 10;
        b = b * 10 + r;
    }

    if (c == b) {
        printf("%d is a palindrome.\n", c);
    } else {
        printf("%d is not a palindrome.\n", c);
    }

    return 0;
}
