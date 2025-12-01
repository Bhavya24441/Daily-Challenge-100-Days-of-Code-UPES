//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
/*
#include <stdio.h>

int main() {
    int n, target;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    int first = -1, last = -1;

    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == target) {
            first = mid;
            high = mid - 1;
        } else if (a[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    low = 0;
    high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == target) {
            last = mid;
            low = mid + 1;
        } else if (a[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("%d %d", first, last);
    return 0;
}

 */



