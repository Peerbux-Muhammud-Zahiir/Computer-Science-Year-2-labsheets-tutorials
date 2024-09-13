#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char *noun = malloc(50 * sizeof(char));
    char *adjective = malloc(50*sizeof(adjective));

    if(noun==NULL||adjective==NULL){
        printf("Memory allocation failed");
        return -1;
    }

    printf("Enter a noun: ");
    scanf("%49s",noun);
    printf("Enter an adjective: ");
    scanf("%49s",adjective);

    printf("Person 1: \"I'm going to eat a %s %s for dinner.\"\n",adjective,noun);
    printf("Person 2: \"That sounds %s! Are you sure you want to eat a %s %s?\"\n",adjective,adjective,noun);
    printf("Person 1: \"Absolutely! I'm %s hungry!\"\n",adjective);
    return 1;

    free(noun);
    free(adjective);
}