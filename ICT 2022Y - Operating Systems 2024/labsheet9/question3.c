#include <stdio.h>
#include <dirent.h>

int main() {
    struct dirent *de;  // Pointer for directory entry

    // Open the current directory
    DIR *dr = opendir(".");

    if (dr == NULL) {  // Check if directory could be opened
        perror("Could not open current directory");
        return 1;
    }

    // Read and print all the files and directories within the current directory
    while ((de = readdir(dr)) != NULL) {
        printf("%s\n", de->d_name);
    }

    // Close the directory
    closedir(dr);

    return 0;
}
