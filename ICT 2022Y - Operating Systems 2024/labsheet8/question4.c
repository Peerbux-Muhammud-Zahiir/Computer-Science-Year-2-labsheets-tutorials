#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
#include <stdlib.h>

void signal_handler(int signum) {
    printf("Child: Received signal %d, exiting...\n", signum);
    exit(0);
}

int main(int argc, char *argv[]) {
    int fd[2];
    int p;
    int n;
    char buffer[21];
    int infile, outfile;

    if (argc != 3) {
        printf("Usage: %s <inputfile> <outputfile>\n", argv[0]);
        return 1;
    }

    pipe(fd);
    infile = open(argv[1], O_RDONLY);
    outfile = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);

    p = fork();

    if (p == 0) { // Child process
        signal(SIGUSR1, signal_handler); // Register signal handler
        close(fd[1]);
        while ((n = read(fd[0], buffer, 20)) > 0) {
            write(outfile, buffer, n);
        }
        pause(); // Wait for signal
    } else { // Parent process
        close(fd[0]);
        while ((n = read(infile, buffer, 20)) > 0) {
            write(fd[1], buffer, n);
        }
        close(infile);
        sleep(1); // Wait for 1 second
        kill(p, SIGUSR1); // Send signal to child
    }
    return 0;
}
