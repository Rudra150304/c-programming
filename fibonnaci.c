#include <stdio.h>

int main() 
{
    int n, i;
    long int a = 0, b = 1, c, sum = 0;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %ld %ld ", a, b);

    for (i = 1; i <= n-2; ++i) {
        c = a + b;
        sum = sum+c;
        printf("%ld ", c);
        a = b;
        b = c;
    }
    printf("Sum is %ld",sum);

    return 0;
}
