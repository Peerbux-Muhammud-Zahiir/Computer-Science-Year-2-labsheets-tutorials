#include <stdio.h>

int main(){
    float temp;
    printf("Enter temperature in C: ");
    scanf("%f",&temp);
    if(temp<=0 || temp>=30){
        printf("weather is bad");
    }else{
        printf("weather is good");
    }
}