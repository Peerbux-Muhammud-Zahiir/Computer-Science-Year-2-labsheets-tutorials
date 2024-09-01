#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <dirent.h>
#include <string.h>
#include <time.h>

void printFileDetails(char *filePath) {
    struct stat fileStat;
    
    if (stat(filePath, &fileStat) == -1) {
        perror("stat");
        return;
    }

    printf("%ld \t%s", fileStat.st_size, ctime(&fileStat.st_mtime));
}

void listDirectory(const char *dirName, int isRecursive) {
    struct dirent *de;
    char filePath[512];
    
    DIR *dr = opendir(dirName);

    if (dr == NULL) {
        perror("Could not open directory");
        return;
    }

    printf("\n%s:\n", dirName);
    while ((de = readdir(dr)) != NULL) {
        snprintf(filePath, sizeof(filePath), "%s/%s", dirName, de->d_name);

        if (de->d_type == DT_DIR) {
            if (strcmp(de->d_name, ".") != 0 && strcmp(de->d_name, "..") != 0) {
                printf("%s (directory)\n", de->d_name);
                if (isRecursive) {
                    listDirectory(filePath, isRecursive);  // Recursively list subdirectories
                }
            }
        } else {
            printFileDetails(filePath);
            printf("%s\n", de->d_name);
        }
    }

    closedir(dr);
}

int main(int argc, char *argv[]) {
    int isRecursive = 0;
    char *dirName;

    if (argc < 2) {
        printf("Usage: %s <directory_name> [-l] [-R]\n", argv[0]);
        return 1;
    }

    dirName = argv[1];

    for (int i = 2; i < argc; i++) {
        if (strcmp(argv[i], "-R") == 0) {
            isRecursive = 1;
        }
    }

    listDirectory(dirName, isRecursive);

    return 0;
}
