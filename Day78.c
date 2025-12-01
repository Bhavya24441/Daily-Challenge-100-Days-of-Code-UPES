//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
/*
#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    int vowels = 0, consonants = 0;
    char c;

    while ((c = fgetc(fp)) != EOF) {
        if (c >= 'A' && c <= 'Z')
            c = c + 32;

        if (c >= 'a' && c <= 'z') {
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}

 */