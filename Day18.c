//Write a program to print all factors of a given number.
/*
#include <stdio.h>

int main() {
    int number;
    int i;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Factors of %d are: ", number);

    for (i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
*/


//Write a program to find the HCF (GCD) of two numbers.
/*
#include <stdio.h>

int main() {
    int num1, num2;
    int i, hcf;

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

    printf("HCF of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}
*/