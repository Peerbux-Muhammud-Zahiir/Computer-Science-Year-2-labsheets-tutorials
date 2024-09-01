#include <stdio.h>
#include <dirent.h>
#include <string.h>

void listRegularFilesWithPath(const char *dirName) {
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
            printf("%s\n", filePath);
        }
    }

    closedir(dr);
}

int main() {
    char dirName[255];

    printf("Enter directory name: ");
    scanf("%s", dirName);

    listRegularFilesWithPath(dirName);

    return 0;
}
