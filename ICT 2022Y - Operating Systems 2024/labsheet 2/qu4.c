#include <stdio.h>
#include <stdlib.h>

void findMinAndMax(int *, int, int *, int *);

int main()
{
    int arrElems, min, max;
    printf("How many elements should there be in the array: ");
    scanf("%d", &arrElems);

    int *array = (int *)malloc(sizeof(int) * arrElems);

    for (int i = 0; i < arrElems; ++i)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", array + i);
    }

    findMinAndMax(array, arrElems, &min, &max);

    printf("\nThe min and max elements of the array are %d and %d respectively.\n", min, max);
    free(array);

    return 0;
}

void findMinAndMax(int *arr, int arrElems, int *min, int *max)
{
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < arrElems; ++i)
    {
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
}