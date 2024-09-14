#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int key = rand() %10+1;
    int guess;
    int count =0;

    do{
        if(guess!=key && count>=3){
            printf("YOU LOSE\n");
            return 1;
        }else{
        printf("Enter a number: ");
        scanf("%d",&guess);
        count++;
        if(guess==key){
            printf("YOU WON\n");
        }else if(guess<key){
            printf("TOO LOW\n");
        }else{
            printf("TOO HIGH\n");
        }
        }
    }while(guess!=key);


    return 0;
}