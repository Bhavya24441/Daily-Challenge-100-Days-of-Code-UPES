//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
/*
#include <stdio.h>

int main() {
    char src[100], dest[100];
    printf("Enter source filename: ");
    scanf("%s", src);
    printf("Enter destination filename: ");
    scanf("%s", dest);

    FILE *fs = fopen(src, "r");
    if (fs == NULL) {
        printf("Source file not found");
        return 0;
    }

    FILE *fd = fopen(dest, "w");
    if (fd == NULL) {
        printf("Could not open destination file");
        return 0;
    }

    int ch;
    while ((ch = fgetc(fs)) != EOF)
        fputc(ch, fd);

    fclose(fs);
    fclose(fd);

    printf("File copied successfully");
    return 0;
}

 */
