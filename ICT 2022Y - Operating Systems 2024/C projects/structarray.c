#include <stdio.h>


struct Student {
    char name[10];
    float gpa;
};

int main(){
    struct Student student1 = {"Ali",3.7};

   struct Student student2={"Aladin",3.5};

    struct Student student3={"Faisal",4};

    struct Student student4={"Amar",3.6};

    struct Student students[4] = {student1,student2,student3,student4};

    int size = sizeof(students)/sizeof(students[0]);

    for(int i=0;i<size;i++){
        printf("Name: %s\n",students[i].name);
        printf("GPA: %.2f\n",students[i].gpa);

        printf("\n");
    }
    return 0;
}