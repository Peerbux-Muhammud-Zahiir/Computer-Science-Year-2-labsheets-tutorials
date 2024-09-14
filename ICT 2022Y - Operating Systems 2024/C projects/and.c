#include <stdio.h>


void weather(float temp){
    if(temp>=25 && temp<=30){
        printf("Weather is good");
    }else{
        printf("Weather is bad");
    }
}

int main(){

    float temp;

    printf("Enter the temperature in C: ");
    scanf("%f",&temp);
    weather(temp);

}