#include <stdio.h>

// Function prototype
void hello(char name[], int age);

int main() {
    char name[] = "John";
    int age = 30;

    // Function call with correct arguments
    hello(name, age);

    // Incorrect function call (missing age argument)
    // hello(name); // This would result in a compilation error

    return 0;
}

// Function definition
void hello(char name[], int age) {
    printf("Hello, %s! You are %d years old.\n", name, age);
}