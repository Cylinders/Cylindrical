#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h> 
int main()
{
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen("main.cyl", "r");
    if (fp == NULL)
        return 1;

    while ((read = getline(&line, &len, fp)) != -1) {
        //
		printf(line); 
		
		
    }

    fclose(fp);
    if (line)
        free(line);
    
	return 1; 
	
}
