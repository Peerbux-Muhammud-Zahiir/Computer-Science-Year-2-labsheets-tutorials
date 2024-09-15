#include <stdio.h>
#include <math.h>

void calcSphereVolAndArea(double, double *, double *);

int main()
{
    double smallerRadius, largerRadius;
    double smallerVolume, largerVolume, smallerSurfaceArea, largerSurfaceArea;

    printf("Enter the radius of the smaller ball: ");
    scanf("%lf", &smallerRadius);
    printf("Enter the radius of the larger ball: ");
    scanf("%lf", &largerRadius);

    calcSphereVolAndArea(smallerRadius, &smallerVolume, &smallerSurfaceArea);
    calcSphereVolAndArea(largerRadius, &largerVolume, &largerSurfaceArea);

    printf("The total volume of the liquid is %lf units^3\n", largerVolume - smallerVolume);
    printf("The total surface area in contact with the liquid is %lf units^2\n", smallerSurfaceArea + largerSurfaceArea);

    return 0;
}

void calcSphereVolAndArea(double radius, double *volume, double *surfaceArea)
{
    *volume = (4 * M_PI * pow(radius, 3.0)) / 3.0;
    *surfaceArea = 4 * M_PI * pow(radius, 2.0);
}