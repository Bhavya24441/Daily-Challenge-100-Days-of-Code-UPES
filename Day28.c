//Write a program to print all the prime numbers from 1 to n.
/*
#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are: \n", n);

    for (i = 1; i <= n; i++) {

        if (i == 1) {
            continue;
        }

        isPrime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
*/

//Read and print elements of a one-dimensional array.
/*
#include <stdio.h>

int main() {
    int arr[10];
    int i, n;

    printf("Enter the number of elements (up to 10): ");
    scanf("%d", &n);

    if (n > 10 || n <= 0) {
        printf("Invalid size. Please enter a number between 1 and 10.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements in the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
 */
