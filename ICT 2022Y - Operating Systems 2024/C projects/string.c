// #include <stdio.h>
// #include <string.h>

// int main() {
//     char string1[100] = "John";
//     char string2[100] = "Doe";

//     // Convert to lowercase
//     strcpy(string1, strlwr(string1));
//     printf("Lowercase: %s\n", string1);

//     // Convert to uppercase
//     strcpy(string2, strupr(string2));
//     printf("Uppercase: %s\n", string2);

//     // Concatenate
//     strcat(string1, string2);
//     printf("Concatenated: %s\n", string1);

//     // Copy
//     strcpy(string1, string2);
//     printf("Copied: %s\n", string1);

//     // Set
//     memset(string1, '?', strlen(string1));
//     printf("Set: %s\n", string1);

//     // Reverse
//     strrev(string1);
//     printf("Reversed: %s\n", string1);

//     // Length
//     int length = strlen(string1);
//     printf("Length: %d\n", length);

//     // Compare
//     int result = strcmp(string1, string2);
//     if (result == 0) {
//         printf("Strings are the same\n");
//     } else {
//         printf("Strings are not the same\n");
//     }

//     return 0;
// }


#include <stdio.h>
#include <string.h>

int main(){
    char name1[50]="Zahiir";
    char name2[50]="Peerbux";
    char name3[50];


    strcpy(name3,strlwr(name1));
    printf("%s",name3);
    printf("\n");

    strcpy(name3,strupr(name1));
    printf("%s",name3);
    printf("\n");

    int length= strlen(name1);
    printf("%d",length);
    printf("\n");


    strcpy(name3,strcat(name1,name2));
    printf("%s",name3);
    printf("\n");
    

    int result = strcmp(name1,name2);

    if(result==0){
        printf("Same");
    }else{
        printf("Different");
    }

    return 0;
}