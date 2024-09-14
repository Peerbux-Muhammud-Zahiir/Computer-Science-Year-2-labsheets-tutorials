// #include <stdio.h>
// #include <math.h>

// int main() {
//     // Square root
//     double a = sqrt(9);
//     printf("Square root of 9: %.2f\n", a);

//     // Power
//     double b = pow(2, 4);
//     printf("2 to the power of 4: %.2f\n", b);

//     // Rounding
//     int c = round(3.14);
//     printf("3.14 rounded: %d\n", c);

//     // Ceiling
//     int d = ceil(3.14);
//     printf("3.14 rounded up: %d\n", d);

//     // Floor
//     int e = floor(3.99);
//     printf("3.99 rounded down: %d\n", e);

//     // Absolute value
//     int f = abs(-100);
//     printf("Absolute value of -100: %d\n", f);

//     // Logarithm
//     double g = log(3);
//     printf("Logarithm of 3: %.6f\n", g);

//     // Tangent
//     double h = tan(45);
//     printf("Tangent of 45: %.6f\n", h);

//     return 0;
// }


#include <stdio.h>
#include <math.h>


int main(){

    float a=4.4,b=5.5,c=6.6,d=7.7,e=8.8,f=9.9;


    printf("%f\n",sqrt(a));
    printf("%f\n",pow(a,4));
    printf("%f\n",ceil(b));
    printf("%f\n",floor(c));
    printf("%f\n",round(d));
    printf("%f\n",tan(e));
    printf("%f\n",sin(f));
    return 0;
}