#include <stdio.h>
#include <math.h>

int poly(int x);

int main()
{
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("The result of polynomial f(x)= x^4 + x^3 + 3x^2 + 2 is %d\n", poly(x));

    return 0;
}

int poly(int x)
{
    return pow(x, 4) + pow(x, 3) + 3 * pow(x, 2) + 2;
}