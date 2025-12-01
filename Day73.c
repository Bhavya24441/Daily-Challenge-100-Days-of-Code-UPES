//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
/*
#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    int characters = 0, words = 0, lines = 0;
    char c, prev = ' ';

    while ((c = fgetc(fp)) != EOF) {
        characters++;

        if (c == '\n')
            lines++;

        if (prev == ' ' || prev == '\n' || prev == '\t')
            if (c != ' ' && c != '\n' && c != '\t')
                words++;

        prev = c;
    }

    if (characters > 0 && prev != '\n')
        lines++;

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    fclose(fp);
    return 0;
}

 */