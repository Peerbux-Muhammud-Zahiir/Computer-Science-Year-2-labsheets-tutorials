#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void funct1(int sig){
	printf("Signal handler called\n");
	printf("%d\n", sig == SIGALRM);
}

int main(){
	signal(SIGALRM, funct1);
	alarm(5);
	pause();
	return 0;
}
