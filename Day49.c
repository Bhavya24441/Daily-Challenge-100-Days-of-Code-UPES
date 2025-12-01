//Print the initials of a name.
/*
#include <stdio.h>

int main() {
    char s[1000];
    printf("Enter a full name: ");
    scanf("%[^\n]", s);

    if (s[0] != ' ')
        printf("%c", s[0]);

    for (int i = 1; s[i] != '\0'; i++)
        if (s[i] == ' ' && s[i+1] != ' ')
            printf("%c", s[i+1]);

    return 0;
}

 */


//Print initials of a name with the surname displayed in full.
/*
#include <stdio.h>

int main() {
    char s[1000];
    printf("Enter full name: ");
    scanf("%[^\n]", s);

    int i = 0;
    while (s[i] == ' ') i++;

    if (s[i] != '\0')
        printf("%c ", s[i]);

    for (; s[i] != '\0'; i++) {
        if (s[i] == ' ' && s[i+1] != ' ') {
            int j = i + 1;
            while (s[j] != ' ' && s[j] != '\0')
                j++;

            if (s[j] == '\0') {
                printf("%s", &s[i+1]);
                break;
            } else {
                printf("

 */