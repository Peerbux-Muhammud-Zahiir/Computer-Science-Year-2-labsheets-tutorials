#include <stdio.h>
#include <dirent.h>

void listRegularFiles(const char *dirName) {
    struct dirent *de;

    DIR *dr = opendir(dirName);

    if (dr == NULL) {
        perror("Could not open directory");
        return;
    }

    while ((de = readdir(dr)) != NULL) {
        if (de->d_type == DT_REG) {  // Check if it's a regular file
            printf("%s\n", de->d_name);
        }
    }

    closedir(dr);
}

int main() {
    char dirName[255];

    printf("Enter directory name: ");
    scanf("%s", dirName);

    listRegularFiles(dirName);

    return 0;
}
