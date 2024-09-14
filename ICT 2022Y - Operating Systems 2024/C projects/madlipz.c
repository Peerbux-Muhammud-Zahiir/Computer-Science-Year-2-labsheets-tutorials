#include <stdio.h>
#include <stdlib.h>

int main(){

    char *business = malloc(50*sizeof(char));
    char *verb = malloc(50*sizeof(char));


    if(business==NULL||verb==NULL){
        printf("Memory allocation failed.");
        return -1;
    }

    printf("Enter business: ");
    scanf("%49s",business);
    printf("Enter verb: ");
    scanf("%49s",verb);
    printf("I tried to start a %s business, but it never %s off.",business,verb);
    return 1;


    free(business);
    free(verb);
}