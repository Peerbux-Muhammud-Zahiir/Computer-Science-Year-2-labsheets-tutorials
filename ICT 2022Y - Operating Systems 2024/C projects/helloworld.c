#include <stdio.h>
#include <stdlib.h>

int main(){

    char *name = malloc(100*sizeof(char));
    int *age= malloc(sizeof(age));
    if((name==NULL) || (&age==NULL)){
        printf("Memory allocation failed");
        return -1;
    }
    printf("Enter your name: ");
    scanf("%99s",name);

    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Hello %s,you are %d years old.",name,age);
    free(name);
    free(age);
    
    return 1;
}