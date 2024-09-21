#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/time.h>
#include <fcntl.h>
#include <pthread.h>

int fd; 
struct timeval t_start;

void handler(int signum){
	struct timeval t_elapsed;
	gettimeofday(&t_elapsed, NULL);
	printf("%lu seconds and %lu microseconds have elapsed\n", t_elapsed.tv_sec - t_start.tv_sec, t_elapsed.tv_usec - t_start.tv_usec);
	write(fd, (t_elapsed.tv_sec - t_start.tv_sec) * 1000 + (t_elapsed.tv_usec - t_start.tv_usec) / 1000, sizeof(suseconds_t));
}

void* executeTimer(void* args){
	struct itimerval timer; 

	gettimeofday(&t_start, NULL);

	timer.it_interval.tv_sec = 0;
	timer.it_interval.tv_usec = 500000;
	timer.it_value.tv_sec = 0;
	timer.it_value.tv_usec = 500000;

	signal(SIGALRM, handler);
	setitimer(ITIMER_REAL, &timer, NULL);
	sleep(1);
}

// Don't ask me why, read readme.txt
int main(){
	pthread_t tid;
	fd = open("timer.txt", O_CREAT | O_WRONLY, 666);
	pthread_create(&tid, NULL, executeTimer, NULL);

	pthread_join(tid, NULL);
	close(fd);
	return 0;
}
