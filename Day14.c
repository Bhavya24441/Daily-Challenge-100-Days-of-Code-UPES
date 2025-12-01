//Write a program to print the sum of the first n odd numbers.
/*
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1);  // Formula for the ith odd number
    }

    printf("Sum of first %d odd numbers is: %d\n", n, sum);

    return 0;
}
*/

//Write a program to print the product of even numbers from 1 to n.
/*
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;
    int hasEven = 0;

    printf("Enter a number n: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are:\n", n);
    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
        product *= i;
        hasEven = 1;
    }

    if (hasEven)
        printf("\nProduct of even numbers = %lld\n", product);
    else
        printf("No even numbers in the range.\n");

    return 0;
}
*/
