#include <stdio.h>
float square(float number){
    float result = number*number;
    return result;
}

int main(){
    printf("Enter a number: ");
    float number;

    if(scanf("%1f", &number)!=1){
        printf("Invalid input!");
        return 1;
    }

    float result1=square(number);
    printf("%.2f squared is %.2f.\n",number,result1);
    return 0;
}