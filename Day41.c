//Count characters in a string without using built-in length functions.
/*
#include <stdio.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%[^\n]", s);

    int count = 0;
    while (s[count] != '\0')
        count++;

    printf("Number of characters: %d", count);
    return 0;
}

 */


//Print each character of a string on a new line.
/*
#include <stdio.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%[^\n]", s);

    for (int i = 0; s[i] != '\0'; i++)
        printf("%c\n", s[i]);

    return 0;
}

 */
