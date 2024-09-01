#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

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
    infile = open(argv[1], O_RDONLY); // Open the input file
    outfile = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644); // Open the output file

    p = fork();

    if (p == 0) { // Child process
        close(fd[1]); // Close the write end of the pipe
        while ((n = read(fd[0], buffer, 20)) > 0) {
            write(outfile, buffer, n); // Write to the output file
        }
        close(outfile); // Close the output file
    } else { // Parent process
        close(fd[0]); // Close the read end of the pipe
        while ((n = read(infile, buffer, 20)) > 0) {
            write(fd[1], buffer, n); // Write to the pipe
        }
        close(infile); // Close the input file
    }
    return 0;
}
