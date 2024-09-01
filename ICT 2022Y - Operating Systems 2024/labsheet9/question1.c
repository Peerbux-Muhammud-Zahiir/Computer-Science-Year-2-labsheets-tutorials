#include <stdio.h>
#include <sys/stat.h>  // Required for mkdir()

int main() {
    char dirName[255];
    
    // Prompt the user for a directory name
    printf("Enter directory name: ");
    scanf("%s", dirName);
    
    // Create the directory with user input
    int val = mkdir(dirName, 0777);
    
    // Check if the directory was created successfully
    if (val == 0) {
        printf("Directory '%s' has been successfully created.\n", dirName);
    } else {
        perror("Error in creation"); // Gives more detailed error output
    }

    return 0;
}
