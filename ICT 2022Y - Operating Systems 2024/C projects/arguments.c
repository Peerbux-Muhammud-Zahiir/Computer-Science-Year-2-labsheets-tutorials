#include <stdio.h>
#include <string.h>

void birthday(char *name,int age){

    printf("Happy birthday to you dear %s\n",name);
    printf("You are %d years old\n",age);

}
int main(){
    char *name="Ali";
    int age=21;
    
    

    birthday(name,age);

}