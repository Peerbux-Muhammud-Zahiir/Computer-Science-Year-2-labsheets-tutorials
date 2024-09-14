// #include <stdio.h>

// int main() {
//     const double pi = 3.14159;
//     double radius, circumference, area;

//     printf("Enter radius of a circle: ");
//     scanf("%lf", &radius);

//     circumference = 2 * pi * radius;
//     printf("Circumference: %.2f meters\n", circumference);

//     area = pi * radius * radius;
//     printf("Area: %.2f meters^2\n", area);

//     return 0;
// }


#include <stdio.h>
#include <math.h>


int main(){


    // const float M_PI =3.142;

    printf("Enter radius: ");
    float radius;
    scanf("%f",&radius);

    float circumference = 2 * M_PI * radius;
    float area = M_PI * pow(radius,2);

    printf("\nRadius: %f\n",radius);
    printf("\nArea: %f\n",area);
    printf("\nCircumference: %f\n",circumference);

    return 0;
}