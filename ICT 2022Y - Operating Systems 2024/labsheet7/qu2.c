#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/time.h>

void handler(int signum){
	printf("signal handler called!\n");
}

int main(){
	struct timeval t_start, t_end;

	while(1){
		gettimeofday(&t_start, NULL);

		signal(SIGALRM, handler);
		alarm(4);
		pause();

		gettimeofday(&t_end, NULL);
		printf("Seconds: %lu		Microseconds: %lu\n", t_end.tv_sec - t_start.tv_sec, t_end.tv_usec - t_start.tv_usec);
	}

	return 0;
}
