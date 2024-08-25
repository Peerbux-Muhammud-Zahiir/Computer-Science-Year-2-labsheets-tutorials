#include <stdio.h>
#include <stdlib.h>


int factorial(int n){
    int result=1;
    while(n>0){
        result*=n;
        n--;
    }
    return result;
}


int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("%d\n",factorial(num));
}
