#include <stdio.h>
#include <dirent.h>
#include <string.h>

void displayFileContent(const char *filePath) {
    FILE *file = fopen(filePath, "r");
    if (file == NULL) {
        perror("Could not open file");
        return;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
}

void displayContentsOfRegularFiles(const char *dirName) {
    struct dirent *de;
    char filePath[512];

    DIR *dr = opendir(dirName);

    if (dr == NULL) {
        perror("Could not open directory");
        return;
    }

    while ((de = readdir(dr)) != NULL) {
        if (de->d_type == DT_REG) {
            snprintf(filePath, sizeof(filePath), "%s/%s", dirName, de->d_name);
            printf("\nContents of %s:\n", filePath);
            displayFileContent(filePath);
        }
    }

    closedir(dr);
}

int main() {
    char dirName[255];

    printf("Enter directory name: ");
    scanf("%s", dirName);

    displayContentsOfRegularFiles(dirName);

    return 0;
}
