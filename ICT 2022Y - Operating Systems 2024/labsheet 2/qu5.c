#include <stdio.h>
#include <stdlib.h>

void inputArray(int *, int);
void displayArray(int *, int);

int main()
{
    int n;
    int *array;

    printf("How many elements the array should have: ");
    scanf("%d", &n);

    array = (int *)malloc(sizeof(int) * n);

    inputArray(array, n);
    displayArray(array, n);

    free(array);
    return 0;
}

void inputArray(int *array, int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("Input element %d: ", i + 1);
        scanf("%d", array + i);
    }
}

void displayArray(int *array, int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ", array[i]);
    printf("\n");
}