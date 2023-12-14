#include <stdio.h>
int main() {
   // printf() displays the string inside quotation
   printf("INIT CYL");
    FILE *file;
    char line[100]; // NO LINES of Cylindrical should be more than 100 characters. 
    
    // Such long lines lead to unreadable and complex, non-cylindrical code. 


    // Open the file in read mode
    file = fopen("example.txt", "r");

    // Check if the file opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return 1; // Return an error code
    }

    // Read and print each line in the file
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(file); 
    
    
    


   return 0;
}