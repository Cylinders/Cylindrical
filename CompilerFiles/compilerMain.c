#include <stdio.h>
int main()
{
    // printf() displays the string inside quotation
    printf("INIT CYL \n");
    FILE *file;
    char line[100]; // NO LINES of Cylindrical should be more than 100 characters.

    // Such long lines lead to unreadable and complex, non-cylindrical code.


    // Open the file in read mode
    file = fopen("main.cyl", "r");

    
    char ch;
    int numlines = 0;

    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == '\n')
        {
            numlines++;
        }
    }
    // Check if the file opened successfully
    if (file == NULL)
    {
        perror("Error opening file");
        return 1; // Return an error code
    }

    // Read and print each line in the file
    char lines[100][1000];
    int i = 0; 

    while (fgets(line, sizeof(line), file) != NULL)
    {
        strcpy(lines[i], line);
        i++; 
    }

    del(&line); 
    del(&i); 
    // Close the file
    fclose(file);

    return 0;
}

char** parser() {
    char ** sub_str = malloc(10 * sizeof(char*));
    for (int i =0 ; i < 10; ++i)
        sub_str[i] = malloc(20 * sizeof(char));
    /* Fill the sub_str strings */
    return sub_str;
}