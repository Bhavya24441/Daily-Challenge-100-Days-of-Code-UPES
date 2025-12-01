//Search in a sorted array using binary search.
/*
#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int key;
    printf("Enter number to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, found = -1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) {
            found = mid;
            break;
        }
        if (a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }

    if (found == -1) printf("Not found");
    else printf("Found at index: %d", found);

    return 0;
}

 */



//Insert an element in a sorted array at the appropriate position.
/*
#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n+1];
    printf("Enter elements (sorted): ");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int x;
    printf("Enter element to insert: ");
    scanf("%d", &x);

    int i = n - 1;
    while (i >= 0 && a[i] > x) {
        a[i+1] = a[i];
        i--;
    }
    a[i+1] = x;
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);

    return 0;
}

 */