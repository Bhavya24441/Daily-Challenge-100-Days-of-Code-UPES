//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
/*
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("0");
        return 0;
    }

    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += a[i];

    int maxSum = sum;

    for (int i = k; i < n; i++) {
        sum = sum + a[i] - a[i - k];
        if (sum > maxSum)
            maxSum = sum;
    }

    printf("%d", maxSum);
    return 0;
}

 */