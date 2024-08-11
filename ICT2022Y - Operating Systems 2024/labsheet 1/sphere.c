#include <stdio.h>
#include <math.h>

int main(){
    
    float radius;
    printf("Enter radius of sphere: ");
    scanf("%f",&radius);
    float volume=(4.0/3.0)*M_PI*pow(radius,3);
    
    float s_area=4.0*M_PI*pow(radius,2);
    
    printf("Volume of sphere: %.2f\n",volume);
    printf("Surface area of sphere: %.2f",s_area);
    
    return 0;
}