//Remove all vowels from a string.
/*
#include <stdio.h>

int main() {
    char s[1000], out[1000];
    printf("Enter a string: ");
    scanf("%[^\n]", s);

    int k = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i], x = c;
        if (x >= 'A' && x <= 'Z') x = x + 32;
        if (x!='a' && x!='e' && x!='i' && x!='o' && x!='u') {
            out[k] = s[i];
            k++;
        }
    }

    out[k] = '\0';
    printf("String without vowels: %s", out);
    return 0;
}

 */



//Find the first repeating lowercase alphabet in a string.
/*
#include <stdio.h>

int main() {
    char s[1000];
    printf("Enter a lowercase string: ");
    scanf("%[^\n]", s);

    int freq[26] = {0};
    char ans = '0';

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            freq[c - 'a']++;
            if (freq[c - 'a'] == 2) {
                ans = c;
                break;
            }
        }
    }

    if (ans == '0')
        printf("No repeating lowercase

 */