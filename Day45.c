//Count frequency of a given character in a string.
/*
#include <stdio.h>

int main() {
    char s[1000], ch;
    printf("Enter a string: ");
    scanf("%[^\n]", s);

    printf("Enter character to count: ");
    scanf(" %c", &ch);

    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] == ch)
            count++;

    printf("Frequency of '%c': %d", ch, count);
    return 0;
}

 */




//Toggle case of each character in a string.
/*
#include <stdio.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%[^\n]", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }

    printf("Toggled string: %s", s);
    return 0;
}

 */


