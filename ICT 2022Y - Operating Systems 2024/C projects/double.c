#include <stdio.h>

int main(){
    printf("Enter a number: ");
    double number;
    scanf("%lf",&number);
    printf("Number entered is: %.1lf",number);
    return 0;
}