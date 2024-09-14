#include <stdio.h>
#include <string.h>

int main(){

    char name1[10]="Ali";
    char name2[10]="Ahmad";


    printf("\n");
    printf("name1: %s ",name1);
    printf("name2: %s ",name2);
    
    char temp[10];
    strcpy(temp,name1);
    strcpy(name1,name2);
    strcpy(name2,temp);


    printf("\n");
    printf("name1: %s ",name1);
    printf("name2: %s ",name2);

    return 0;
}