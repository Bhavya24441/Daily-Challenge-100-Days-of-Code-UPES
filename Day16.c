//Write a program to take a number as input and print its equivalent binary representation.
/*
#include <stdio.h>

void printBinary(int num) {
    int binary[32]; // Assuming 32-bit integer
    int i = 0;

    if (num == 0) {
        printf("Binary: 0\n");
        return;
    }

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printBinary(number);

    return 0;
}
*/

//Write a program to check if a number is a palindrome.
/*
#include <stdio.h>

int main() {
    int n, reversedNumber = 0, remainder, originalNumber;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalNumber = n;

    // Handle negative numbers, which are not considered palindromes
    if (n < 0) {
        printf("%d is not a palindrome.\n", originalNumber);
        return 0;
    }

    // Reverse the integer
    while (n > 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n = n / 10;
    }

    // Check if the original number is equal to its reverse
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}
*/