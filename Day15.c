//Write a program to calculate the factorial of a number.
/*
#include <stdio.h>

int main() {
    int n;

    long long factorial = 1;
    printf("Enter a non-negative integer: ");


    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }


    if (n < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {


        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }



        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}
*/


//Write a program to reverse a given number.
/*
#include <stdio.h>

int main() {
    int n;
    int reversed_number = 0;
    int remainder;

    printf("Enter an integer to reverse: ");

    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    int original_number = n;

    while (n != 0) {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }

    printf("The reverse of %d is %d\n", original_number, reversed_number);

    return 0;
}
*/
