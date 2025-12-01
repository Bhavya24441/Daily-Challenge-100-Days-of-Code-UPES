//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
/*
#include <stdio.h>

int main() {
    char filename[100], line[500];
    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    printf("Enter text to append: ");
    scanf(" %[^\n]", line);

    fprintf(fp, "%s\n", line);

    fclose(fp);

    printf("Text appended successfully");
    return 0;
}

 */