#include <stdio.h>
#include <dirent.h>

int main(int argc, char *argv[]) {
    struct dirent *de;

    // Check if the user has provided a directory name
    if (argc != 2) {
        printf("Usage: %s <directory_name>\n", argv[0]);
        return 1;
    }

    // Open the specified directory
    DIR *dr = opendir(argv[1]);

    if (dr == NULL) {
        perror("Could not open specified directory");
        return 1;
    }

    // List all files and directories within the specified directory
    while ((de = readdir(dr)) != NULL) {
        printf("%s\n", de->d_name);
    }

    // Close the directory
    closedir(dr);

    return 0;
}
