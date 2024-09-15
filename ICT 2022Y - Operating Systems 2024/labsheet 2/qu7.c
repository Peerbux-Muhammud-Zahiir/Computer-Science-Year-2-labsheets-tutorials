#include <stdio.h>

int main()
{
    char surname[64];
    char firstname[64];
    char address[128];

    printf("Enter your surname: ");
    scanf("%s", surname);

    printf("Enter your firstname: ");
    scanf("%s", firstname);

    printf("Enter your address: ");
    scanf("%s", address);

    printf("Your surname is %s\nYour firstname is %s\nYour address is %s\n", surname, firstname, address);

    return 0;
}