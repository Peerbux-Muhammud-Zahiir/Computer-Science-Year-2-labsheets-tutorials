
#include <stdio.h>
#define PI 3.141
#define add(a,b) a+b
#define greater(a,b) if(a>b)\
  printf("%d is greater than %d\n",a,b);\
else\
  printf("%d is greater than %d\n",b,a);
int main()
{
    printf("%.2f\n",PI);
    printf("%d\n",add(2,3));
    greater(3,4);
    printf("DATE:%s\n",__DATE__);//access date
    printf("TIME:%s\n",__TIME__);//access time
    int num1;
    printf("Enter a number: ");
    scanf("%d",&num1);// take input from user and store at address of num1
    printf("%d",num1);
    return 0;
}
