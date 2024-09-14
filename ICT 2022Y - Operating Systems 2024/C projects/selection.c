#include <stdio.h>


int main(){

    int number;
    
    printf("Enter a number: ");

    scanf("%d",&number);


    if(number%2==0){
        printf("Number is even.");
    }else{
        printf("Number is odd.");
    }
    
    printf("\n");

    int remainder = number %2;
    switch(remainder){
        case 0:{
            printf("Number is even.");
            break;
        }
        case 1:{
            printf("Number is odd.");
            break;
        }
    }


    return 0;
}