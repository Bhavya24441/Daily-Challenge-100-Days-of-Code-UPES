//Write a program to find the LCM of two numbers.
/*
#include <stdio.h>

int main() {
    int num1, num2;
    int i, hcf, lcm;

    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    hcf = 1;
    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    lcm = (num1 * num2) / hcf;

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
*/


//Write a program to find the sum of digits of a number.
/*
#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    int digit;
    int originalNumber;

    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }

    if (originalNumber == 0) {
        sum = 0;
    }

    printf("Sum of digits of %d is %d\n", originalNumber, sum);

    return 0;
}
*/
