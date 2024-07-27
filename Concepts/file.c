#include <stdio.h>
#include <string.h>

int main()
{
    char filePath[256];
    strcpy(filePath, "D:\\learn.cpp\\mridul.txt");

    FILE *fptr = fopen(filePath, "w");
    if (fptr == NULL) {
        perror("Error opening file for writing");
        return 1;
    }
    fprintf(fptr, "Hello, World!\n");
    fputc('Hi there',fptr);
    fclose(fptr);

    fptr = fopen(filePath, "r");
    if (fptr == NULL) {
        perror("Error opening file for reading");
        return 1;
    }
    char data[256];
    if (fgets(data, sizeof(data), fptr) != NULL) {
        printf("%s",data);
    }
    fclose(fptr);

    return 0;
}
