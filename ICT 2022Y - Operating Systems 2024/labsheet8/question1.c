#include <stdio.h>
#include <unistd.h>

void main() {
    int fd[2]; // Array to store two file descriptors
    int p; // Process ID for fork
    int n; // Number of bytes read
    int x; // Return value of pipe() system call
    char line[20]; // Array to store the data read

    x = pipe(fd); // Create a pipe, storing file descriptors in fd

    p = fork(); // Fork the process to create a child

    if (p == 0) { // Child process
        printf("Hello- I'm the child\n");
        close(fd[1]); // Close the write end of the pipe
        n = read(fd[0], line, 12); // Read 12 bytes from the read end of the pipe
        printf("Child - Line read was %s\n", line); // Print the data read
    } else { // Parent process
        close(fd[0]); // Close the read end of the pipe
        write(fd[1], "hello world \n", 12); // Write "hello world" to the pipe
    }
    exit(0); // Exit the program
}
