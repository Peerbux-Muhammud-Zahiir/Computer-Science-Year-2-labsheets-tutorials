#include <stdio.h>
#include <stdbool.h>
int main(){
  
    printf("Enter a number or terminate with -1:");
    int number;
    int count=0;
    int sum=0;
    while(true){
        scanf("%d",&number);
        
        if(number==-1){break;}else if(number%2==0){
            count++;
            sum+=number;
}
    }
    
    
    printf("Number of positive integers: %d \n",count);
    printf("Sum of positive numbers: %d \n",sum);
    return 0;
    
}