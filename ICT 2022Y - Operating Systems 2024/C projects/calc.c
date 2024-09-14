#include <stdio.h>
#include <math.h>

void add(int n1,int n2){
    printf("%d",n1+n2);
}

void subtraction(int n1,int n2){
    printf("%d",n1-n2);
}


void product(int n1,int n2){
    printf("%d",n1*n2);
}

void quotient(int n1,int n2){
    if(n2==0){
        printf("Error:Division by Zero");
    }else{
    printf("%d",n1/n2);
    }
}
int main(){

    int num1,num2;
    char op;

    printf("Enter operator: ");
    scanf("%c",&op);

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    

    switch(op){
        case '+':{
            add(num1,num2);
            break;
        }

        case '-':{
            subtraction(num1,num2);
            break;
        }

        case '*':{
            product(num1,num2);
            break;
        }


        case '/':{
            quotient(num1,num2);
            break;
        }


        default:{
            printf("Wrong operator");
            break;
        }
    }

    return 0;
}