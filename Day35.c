//Find the second largest element in an array.
/*
#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int max1 = a[0], max2 = -1000000000;

    for (int i = 1; i < n; i++) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2 && a[i] != max1) {
            max2 = a[i];
        }
    }

    printf("Second largest element: %d", max2);
    return 0;
}

 */

//Rotate an array to the right by k positions.
/*
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n], b[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    k = k % n;

    for (int i = 0; i < n; i++) {
        b[(i + k) % n] = a[i];
    }

    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) printf("%d ", b[i]);

    return 0;
}

 */
