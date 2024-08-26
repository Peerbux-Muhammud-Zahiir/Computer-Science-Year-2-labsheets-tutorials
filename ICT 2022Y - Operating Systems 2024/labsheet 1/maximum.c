#include <stdio.h>

int main() {
    int n, i, value, max;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    scanf("%d", &value);
    max = value;

    for(i = 1; i < n; i++) {
        scanf("%d", &value);
        if(value > max)
            max = value;  // Update max if current value is larger
    }

    printf("The largest value is: %d\n", max);
    return 0;
}
