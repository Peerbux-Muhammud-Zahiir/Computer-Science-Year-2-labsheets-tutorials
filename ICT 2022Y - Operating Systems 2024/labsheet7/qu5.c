#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/time.h>

pid_t pid1, pid2;
int c1 = 0;
int c2 = 1;

void handle_signal1(int signum){
	c1++;
}

void handle_signal2(int signum){
	c2 *= 2;
}

int main(){
	int pidSelf;
	pid1 = fork();

	if(pid1 == 0){ // Child 1
		pidSelf = getpid();
		signal(SIGUSR1, handle_signal1);
		signal(SIGUSR2, handle_signal2);

		while(1){
		pause();
		printf("PID: %d		c1: %d		c2: %d\n", pidSelf, c1, c2);
		}	
		 
	}
	else if(pid1 > 0){ 
		pid2 = fork();

		if(pid2 == 0){ // Child 2
			pidSelf = getpid();
			signal(SIGUSR1, handle_signal1);
			signal(SIGUSR2, handle_signal2);

			while(1){
				pause();
				printf("PID: %d		c1: %d		c2: %d\n", pidSelf, c1, c2);
			}
		}
		else if(pid2 > 0){ // Parent
		int firstSig, secondSig;
		firstSig = SIGUSR1;
		secondSig = SIGUSR2;

		while(1){
			for(int i=0; i < 2; ++i){
				sleep(1);
				kill(pid1, firstSig);
				kill(pid2, secondSig);
			}
			int temp = firstSig;
			firstSig = secondSig;
			secondSig = temp;
		}
		}
	}
}

