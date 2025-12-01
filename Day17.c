//Write a program to check if a number is an Armstrong number.

/*
 #include <stdio.h>

int calculatePower(int base, int exponent) {
    int result = 1;
    int i;

    for (i = 0; i < exponent; i++) {
        result = result * base;
    }
    return result;
}

int main() {
    int number;
    int originalNumber;
    int tempNumber;
    int digitCount = 0;
    int sumOfPowers = 0;
    int digit;

    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;
    tempNumber = number;

    if (tempNumber == 0) {
        digitCount = 1;
    } else {
        while (tempNumber > 0) {
            tempNumber = tempNumber / 10;
            digitCount = digitCount + 1;
        }
    }

    tempNumber = originalNumber;

    while (tempNumber > 0) {
        digit = tempNumber % 10;
        sumOfPowers = sumOfPowers + calculatePower(digit, digitCount);
        tempNumber = tempNumber / 10;
    }

    if (sumOfPowers == originalNumber) {
        printf("%d is an Armstrong number.\n", originalNumber);
    } else {
        printf("%d is not an Armstrong number.\n", originalNumber);
    }

    return 0;
}
*/



//Write a program to check if a number is prime.
/*
#include <stdio.h>

int main() {
    int number;
    int i;
    int isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number == 0 || number == 1) {
        isPrime = 0;
    } else if (number == 2) {
        isPrime = 1;
    } else {
        for (i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
*/