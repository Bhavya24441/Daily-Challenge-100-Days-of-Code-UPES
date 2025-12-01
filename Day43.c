//Reverse a string.
/*
#include <stdio.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%[^\n]", s);

    int len = 0;
    while (s[len] != '\0')
        len++;

    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--)
        printf("%c", s[i]);

    return 0;
}

 */



//Check if a string is a palindrome.
/*
#include <stdio.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%[^\n]", s);

    int len = 0;
    while (s[len] != '\0')
        len++;

    int left = 0, right = len - 1, pal = 1;

    while (left < right) {
        if (s[left] != s[right]) {
            pal = 0;
            break;
        }
        left++;
        right--;
    }

    if (pal)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}

 */