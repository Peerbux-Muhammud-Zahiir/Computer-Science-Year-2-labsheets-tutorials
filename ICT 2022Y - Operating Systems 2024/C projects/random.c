#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));

    int number1 = rand() %6 +1;
    int number2 = rand() %6 + 1;
    int number3 = rand() %6 + 1;
    int number4 = rand() %6 +1;
    int number5 = rand() %6 + 1;
    int number6 = rand() %6 + 1;

    printf("%d\n",number1);
    printf("%d\n",number2);
    printf("%d\n",number3);
    printf("%d\n",number4);
    printf("%d\n",number5);
    printf("%d\n",number6);

    return 0;
}