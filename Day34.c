//Insert an element in an array at a given position.
/*
#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n+1];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int x, pos;
    printf("Enter element to insert: ");
    scanf("%d", &x);
    printf("Enter position (0-based index): ");
    scanf("%d", &pos);

    for (int i = n; i > pos; i--) a[i] = a[i-1];
    a[pos] = x;
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);

    return 0;
}

 */

//Delete an element from an array.
/*
#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int pos;
    printf("Enter position to delete (0-based index): ");
    scanf("%d", &pos);

    for (int i = pos; i < n - 1; i++) a[i] = a[i + 1];
    n--;

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);

    return 0;
}
*/