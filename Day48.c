//Check if one string is a rotation of another.
/*
#include <stdio.h>

int main() {
    char s1[1000], s2[1000], temp[2000];
    printf("Enter first string: ");
    scanf("%[^\n]", s1);
    printf("Enter second string: ");
    scanf(" %[^\n]", s2);

    int len1 = 0, len2 = 0;
    while (s1[len1] != '\0') len1++;
    while (s2[len2] != '\0') len2++;

    if (len1 != len2) {
        printf("Not rotation");
        return 0;
    }

    for (int i = 0; i < len1; i++)
        temp[i] = s1[i];
    for (int i = 0; i < len1; i++)
        temp[len1 + i] = s1[i];
    temp[2 * len1] = '\0';

    int rotation = 0;
    for (int i = 0; i <= 2 * len1 - len2; i++) {
        int j = 0;
        while (j < len2 && temp[i + j] == s2[j])
            j++;
        if (j == len2) {
            rotation = 1;
            break;
        }
    }

    if (rotation)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}

 */


//Reverse each word in a sentence without changing the word order.
/*
#include <stdio.h>

int main() {
    char s[1000];
    printf("Enter a sentence: ");
    scanf("%[^\n]", s);

    int start = 0;
    for (int i = 0; ; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            int end = i - 1;
            while (start < end) {
                char t = s[start];
                s[start] = s[end];
                s[end] = t;
                start++;
                end--;
            }
            if (s[i] == '\0') break;
            start = i + 1;
        }
    }

    printf("Modified sentence: %s", s);
    return 0;
}

 */
