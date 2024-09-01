#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <dirent.h>
#include <time.h>

void printFileDetails(char *filePath) {
    struct stat fileStat;
    
    if (stat(filePath, &fileStat) == -1) {
        perror("stat");
        return;
    }

    printf("%ld \t%s", fileStat.st_size, ctime(&fileStat.st_mtime));
}

int main(int argc, char *argv[]) {
    struct dirent *de;
    char filePath[512];

    if (argc != 3) {
        printf("Usage: %s <directory_name> [-l]\n", argv[0]);
        return 1;
    }

    DIR *dr = opendir(argv[1]);

    if (dr == NULL) {
        perror("Could not open specified directory");
        return 1;
    }

    while ((de = readdir(dr)) != NULL) {
        snprintf(filePath, sizeof(filePath), "%s/%s", argv[1], de->d_name);
        if (strcmp(argv[2], "-l") == 0) {
            printFileDetails(filePath);
        }
        printf("%s\n", de->d_name);
    }

    closedir(dr);

    return 0;
}
