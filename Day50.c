//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
/*
#include <stdio.h>

int main() {
    char s[20];
    printf("Enter date (dd/04/yyyy): ");
    scanf("%s", s);

    char day[3], year[5];
    day[0] = s[0];
    day[1] = s[1];
    day[2] = '\0';

    year[0] = s[6];
    year[1] = s[7];
    year[2] = s[8];
    year[3] = s[9];
    year[4] = '\0';

    printf("%s-Apr-%s", day, year);
    return 0;
}

 */


//Print all sub-strings of a string.
/*
#include <stdio.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%[^\n]", s);

    int len = 0;
    while (s[len] != '\0')
        len++;

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++)
                printf("%c", s[k]);
            printf("\n");
        }
    }

    return 0;
}

 */