#include <stdio.h>

int main() {
    float exam, ca;
    printf("Enter the Continuous Assessment marks (out of 50): ");
    scanf("%f", &ca);
    printf("Enter the Exam marks (out of 100): ");
    scanf("%f", &exam);



    if (ca >= 20 && exam >= 40) {
        printf("Passed\n");
    } else if ((ca >= 17.5 && ca < 20 && exam >= 80) || (exam >= 35 && exam < 40 && ca >= 40)) {
        printf("Pushed Up\n");
    } else {
        printf("Failed\n");
    }
    return 0;
}
