//Count vowels and consonants in a string.
/*
#include <stdio.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%[^\n]", s);

    int vowels = 0, consonants = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            char x = c;
            if (x >= 'A' && x <= 'Z') x = x + 32;
            if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}

 */


//Convert a lowercase string to uppercase without using built-in functions.
/*
#include <stdio.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%[^\n]", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }

    printf("Uppercase string: %s", s);
    return 0;
}

 */
