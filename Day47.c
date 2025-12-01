//Check if two strings are anagrams of each other.
/*
#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    printf("Enter first string: ");
    scanf("%[^\n]", s1);
    printf("Enter second string: ");
    scanf(" %[^\n]", s2);

    int freq[256] = {0};

    for (int i = 0; s1[i] != '\0'; i++)
        freq[(unsigned char)s1[i]]++;

    for (int i = 0; s2[i] != '\0'; i++)
        freq[(unsigned char)s2[i]]--;

    int anagram = 1;
    for (int i = 0; i < 256; i++)
        if (freq[i] != 0)
            anagram = 0;

    if (anagram)
        printf("Anagram");
    else
        printf("Not anagram");

    return 0;
}

 */


//Find the longest word in a sentence.
/*
#include <stdio.h>

int main() {
    char s[1000];
    printf("Enter a sentence: ");
    scanf("%[^\n]", s);

    int maxLen = 0, currLen = 0, start = 0, maxStart = 0;

    for (int i = 0; ; i++) {
        if (s[i] != ' ' && s[i] != '\0') {
            if (currLen == 0) start = i;
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0

 */