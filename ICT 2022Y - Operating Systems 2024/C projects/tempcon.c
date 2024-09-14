// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char unit;
//     float temp;

//     printf("Is the temperature in F or C? ");
//     scanf("%c", &unit);

//     unit = toupper(unit);

//     if (unit == 'C') {
//         printf("Enter the temp in Celsius: ");
//         scanf("%f", &temp);

//         temp = temp * 9 / 5 + 32;
//         printf("The temp in Fahrenheit is %.1f\n", temp);
//     } else if (unit == 'F') {
//         printf("Enter the temp in Fahrenheit: ");
//         scanf("%f", &temp);

//         temp = (temp - 32) * 5 / 9;
//         printf("The temp in Celsius is %.1f\n", temp);
//     } else {
//         printf("%c is not a valid unit of measurement.\n", unit);
//     }

//     return 0;
// }


#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;



    printf("Enter unit: ");
    scanf("%c",&unit);

    printf("Enter temperature: ");
    scanf("%f",&temp);

    unit=toupper(unit);

    if(unit=='C'){
        temp= temp*(9/5)+32;
        printf("Temperature in Fahrenheit is %f",temp);
    } else if(unit=='F'){
        temp= (temp-32)*(9/5);
        printf("Temperature in Celsius is %f",temp);
    }else{
        printf("Invalid unit");
    }

    return 0;
}