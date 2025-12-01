//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
/*
#include <stdio.h>

int main() {
    char s[1000], t[1000];
    printf("Enter first string: ");
    scanf("%[^\n]", s);
    printf("Enter second string: ");
    scanf(" %[^\n]", t);

    int freq[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
        freq[s[i] - 'a']++;

    for (int i = 0; t[i] != '\0'; i++)
        freq[t[i] - 'a']--;

    int ok = 1;
    for (int i = 0; i < 26; i++)
        if (freq[i] != 0)
            ok = 0;

    if (ok)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}

 */