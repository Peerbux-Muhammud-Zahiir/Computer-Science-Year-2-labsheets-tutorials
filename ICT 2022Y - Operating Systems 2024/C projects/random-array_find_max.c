#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>  
#include <time.h>
int main() {
    int n = 1000;  
    int arr[n];  
    int min, max;
    struct timeval tstart, tend;

   
    srand(time(NULL));

   
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

   
    min = max = arr[0];
   
   
    gettimeofday(&tstart, NULL);

   
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
   
   
    gettimeofday(&tend, NULL);
   
   
    long seconds = tend.tv_sec - tstart.tv_sec;
    long microseconds = tend.tv_usec - tstart.tv_usec;
    double timetaken = seconds + microseconds / 1e6;

   
    printf("Time taken for array of %d elements is %f seconds\n", n, timetaken);

   
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}