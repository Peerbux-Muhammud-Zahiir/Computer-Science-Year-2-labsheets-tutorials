#include <stdio.h>

void swap(int *first, int *second);

int main()
{
    int x = 10;
    int y = 4;

    printf("Values x & y before swap: %d %d\n", x, y);
    swap(&x, &y);
    printf("Values x & y after swap: %d %d\n", x, y);

    return 1;
}

void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}