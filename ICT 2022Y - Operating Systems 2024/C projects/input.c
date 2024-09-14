#include <stdio.h>
#include <string.h>

int main(){
    char name[50];
    int age;


    printf("What is your name: ");
    fgets(name,50,stdin);

    name[strlen(name)-1]='\0';
    printf("Hello %s\n\n",name);
    printf("What is your age: ");
    scanf("%d",&age);

    printf("You are %d years old\n",age);


    return 0;
}