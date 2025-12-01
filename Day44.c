//Count spaces, digits, and special characters in a string.
/*
#include <stdio.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%[^\n]", s);

    int spaces = 0, digits = 0, special = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c == ' ')
            spaces++;
        else if (c >= '0' && c <= '9')
            digits++;
        else if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
            special++;
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}

 */


//Replace spaces with hyphens in a string.
/*
#include <stdio.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%[^\n]", s);

    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] == ' ')
            s[i] = '-';

    printf("Modified string: %s", s);
    return 0;
}

 */