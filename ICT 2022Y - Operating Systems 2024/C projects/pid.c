#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
    fork();
    fork();
    fork();
    fork();
    printf("Welcome to Zahiir C programs repository! \nPID = %d\n\n",getpid());
    return 0;
}
