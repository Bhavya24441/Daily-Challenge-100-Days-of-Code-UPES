//Search for an element in an array using linear search.
/*
#include <stdio.h>

int main() {
    int arr[10];
    int i, n, searchElement, found = 0;

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

    printf("Enter the element to search for: ");
    scanf("%d", &searchElement);

    for (i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            printf("Element found at position: %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
 */

//Reverse an array without taking extra space.
/*
#include <stdio.h>

int main() {
    int arr[10];
    int i, n, temp;
    int start, end;

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

    start = 0;
    end = n - 1;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
 */