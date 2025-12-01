/*
//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("This is a leap year");

    }else
    {
        printf("This is not a leap year");
    }
    return 0;
}
*/


/*
//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main()
{
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' || character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
    {
        printf("The character entered is a vowel.\n");
    }else
    {
        printf("The character entered is a consonant.\n");
    }
    return 0;

}
*/