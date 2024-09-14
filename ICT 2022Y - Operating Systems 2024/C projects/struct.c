#include <stdio.h>
#include <string.h>

struct Person {
    char name[10];
    int age;
};

int main(){
    struct Person person1,person2;

    strcpy(person1.name,"Jeremy");
    person1.age=17;

    strcpy(person2.name,"David");
    person2.age=30;


    printf("%s %d\n",person1.name,person1.age);
     printf("%s %d\n",person2.name,person2.age);



    return 0;
}