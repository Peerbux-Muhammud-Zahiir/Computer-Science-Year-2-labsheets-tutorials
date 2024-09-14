#include <stdio.h>
#include <stdlib.h>


int main(){
    // name,age,gpa,grade

    char *name=malloc(50*sizeof(char));
    int age;
    float gpa;
    char grade;

    if(name==NULL){
        printf("Memory allocation failed!");
        return -1;
    }

    printf("Enter your name: ");
    scanf("%49s",name);

    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Enter your gpa: ");
    scanf("%.1f",&gpa);

    printf("Enter your grade: ");
    scanf(" %c",&grade);


    printf("\nHello %s\n",name);
    printf("You are %d yo\n",age);
    printf("Your GPA is %f\n",gpa);
    printf("Your grade is %c\n",grade);


    free(name);
    return 1;
}