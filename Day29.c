//Find the sum of array elements.
/*
#include <stdio.h>

int main() {
    int arr[10];
    int i, n, sum = 0;

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

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}
*/

//Find the maximum and minimum element in an array.
/*
#include <stdio.h>

int main() {
    int arr[10];
    int i, n, max, min;

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

    max = arr[0];
    min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);

    return 0;
}
*/