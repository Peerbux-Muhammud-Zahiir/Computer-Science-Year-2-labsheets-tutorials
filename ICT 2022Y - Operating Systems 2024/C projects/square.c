#include <stdio.h>

double square(double number){
    return number*number;
}

int main(){

    printf("Enter number: ");
    double number;
    scanf("%lf",&number);
    printf("%.2lf",square(number));
    return 0;
}