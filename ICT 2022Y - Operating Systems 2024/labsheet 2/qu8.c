#include <stdio.h>
#include <stdlib.h>

void inputStudentInfo(char **, char **, float *);
void findLowestHighest(float *, int, int *, int *);

int main()
{
    int n, lowestIndex, highestIndex;
    char **firstNames;
    char **lastNames;
    float *marks;

    while (n <= 0 || n > 20)
    {
        printf("Enter the number of students(1-20): ");
        scanf("%d", &n);
        if (n <= 0 || n > 20)
            printf("Invalid Number of Students! (1-20)");
    }

    firstNames = (char **)malloc(sizeof(char *) * n);
    lastNames = (char **)malloc(sizeof(char *) * n);

    for (int i = 0; i < n; ++i)
    {
        printf("Student %d\n", i + 1);
        inputStudentInfo(&firstNames[i], &lastNames[i], &marks[i]);
    }
    findLowestHighest(marks, n, &lowestIndex, &highestIndex);

    printf("\n");
    printf("The lowest scorer:\nfirstname: %s\nlastname: %s\nmarks: %f\n", firstNames[lowestIndex], lastNames[lowestIndex], marks[lowestIndex]);
    printf("\n");
    printf("The highest scorer:\nfirstname: %s\nlastname: %s\nmarks: %f\n", firstNames[highestIndex], lastNames[highestIndex], marks[highestIndex]);

    for (int i = 0; i < n; ++i)
    {
        if (firstNames[i] == NULL)
            break;

        free(firstNames[i]);
        free(lastNames[i]);
    }

    free(firstNames);
    free(lastNames);
    return 0;
}

void inputStudentInfo(char **firstNamePtr, char **lastNamePtr, float *markPtr)
{
    *firstNamePtr = (char *)malloc(sizeof(char) * 64);
    *lastNamePtr = (char *)malloc(sizeof(char) * 64);

    printf("Enter your firstname: ");
    scanf("%s", *firstNamePtr);
    printf("Enter your lastname: ");
    scanf("%s", *lastNamePtr);
    do
    {
        printf("Enter your marks for OS: ");
        scanf("%f", markPtr);
        if (*markPtr < 0 || *markPtr > 100)
            printf("Invalid Marks! (0-100)\n");
    } while (*markPtr < 0 || *markPtr > 100);
}

void findLowestHighest(float *arr, int count, int *lowestIndex, int *highestIndex)
{
    float lowest = arr[0];
    float highest = arr[0];
    for (int i = 1; i < count; ++i)
    {
        if (arr[i] < lowest)
        {
            lowest = arr[i];
            *lowestIndex = i;
        }
        if (arr[i] > highest)
        {
            highest = arr[i];
            *highestIndex = i;
        }
    }
}