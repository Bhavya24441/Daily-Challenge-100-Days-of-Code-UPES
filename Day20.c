//Write a program to find the product of odd digits of a number.
/*
#include <stdio.h>

int main() {
    int number;
    int product = 1;
    int digit;
    int originalNumber;
    int hasOddDigit = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    if (number < 0) {
        number = -number;
    }

    if (number == 0) {
        hasOddDigit = 0;
    }

    while (number > 0) {
        digit = number % 10;

        if (digit % 2 != 0) {
            product = product * digit;
            hasOddDigit = 1;
        }

        number = number / 10;
    }

    if (hasOddDigit == 0) {
        product = 0;
    }

    printf("Product of odd digits of %d is %d\n", originalNumber, product);

    return 0;
}
*/


//Write a program to find the 1’s complement of a binary number and print it.
/*
#include <stdio.h>

int main() {
    char binary_number[100];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary_number);

    printf("1's complement is: ");

    i = 0;
    while (binary_number[i] != '\0') {

        if (binary_number[i] == '1') {
            printf("0");
        } else if (binary_number[i] == '0') {
            printf("1");
        }

        i++;
    }

    printf("\n");

    return 0;
}
*/