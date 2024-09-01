#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>

void deleteDirectoryRecursively(const char *dirName) {
    struct dirent *de;
    char filePath[512];
    struct stat st;

    DIR *dr = opendir(dirName);

    if (dr == NULL) {
        perror("Could not open directory");
        return;
    }

    while ((de = readdir(dr)) != NULL) {
        if (strcmp(de->d_name, ".") != 0 && strcmp(de->d_name, "..") != 0) {
            snprintf(filePath, sizeof(filePath), "%s/%s", dirName, de->d_name);

            if (stat(filePath, &st) == 0 && S_ISDIR(st.st_mode)) {
                // If it's a directory, recursively delete its contents
                deleteDirectoryRecursively(filePath);
            } else {
                // If it's a file, delete it
                if (unlink(filePath) != 0) {
                    perror("Error deleting file");
                }
            }
        }
    }

    closedir(dr);

    // Finally, delete the directory itself
    if (rmdir(dirName) != 0) {
        perror("Error deleting directory");
    }
}

int main() {
    char dirName[255];

    printf("Enter directory name to delete: ");
    scanf("%s", dirName);

    deleteDirectoryRecursively(dirName);

    return 0;
}
