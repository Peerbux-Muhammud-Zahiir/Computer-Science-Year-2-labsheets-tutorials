#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void arithmeticErrorHandler(int signum){
	printf("Error, cannot divide by 0!\n");
	exit(-1);
}

int main(){
	signal(SIGFPE, arithmeticErrorHandler);
	int x, y;

	printf("Enter the value of x: ");
	scanf("%d", &x);
	printf("Enter the value of y: ");
	scanf("%d", &y);
	printf("%d\n",x/y);

	return 0;
}
