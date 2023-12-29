#include <stdio.h>
#include <math.h>

int main() 
{
    int a, b, r, n = 0, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &a);

    b = a;

    for (; b != 0; b /= 10)
    {
        n++;
    }
    b = a;

    for (; b != 0; b/10) 
    {
        r = b % 10;
        sum += pow(r, n);
    }

    if (sum == a) {
        printf("%d is an Armstrong number.\n", a);
    } else {
        printf("%d is not an Armstrong number.\n", a);
    }

    return 0;
}
