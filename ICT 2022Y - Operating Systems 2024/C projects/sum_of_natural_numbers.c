#include <stdio.h>

int main()
{
    printf("Enter the upper bound: ");   // using loop
    int n;
    scanf("%d",&n);
    int sum=0;
    int i=0;
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("%d\n",sum);
    
    
    sum=n*(n+1)/2; // using formula
    printf("%d\n",sum);
    return 0;
}
