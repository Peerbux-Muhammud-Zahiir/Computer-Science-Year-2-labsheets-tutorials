#include <stdio.h>
#include <stdlib.h>
int main(){
    char *name= malloc(20*sizeof(char));
    int age;
    float gpa;
    char grade;

    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your gpa: "); 
    scanf("%.2f",&gpa);
    printf("Enter your grade: ");
    scanf("%c",&grade);

    printf("Your name: %s",name);
    printf("Your gpa: %.2f",gpa);
    printf("Your name: %c",grade);
    free(name);
    return 0;
}