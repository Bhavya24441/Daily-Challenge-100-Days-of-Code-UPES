//Count even and odd numbers in an array.
/*
#include <stdio.h>

int main() {
    int arr[10];
    int i, n;
    int evenCount = 0;
    int oddCount = 0;

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
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Total even elements: %d\n", evenCount);
    printf("Total odd elements: %d\n", oddCount);

    return 0;
}
 */

//Count positive, negative, and zero elements in an array.
/*
#include <stdio.h>

int main() {
    int arr[10];
    int i, n;
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

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
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Total positive elements: %d\n", positiveCount);
    printf("Total negative elements: %d\n", negativeCount);
    printf("Total zero elements: %d\n", zeroCount);

    return 0;
}
 */