//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
/*
#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int maxSoFar = a[0];
    int curr = a[0];

    for (int i = 1; i < n; i++) {
        if (curr + a[i] < a[i])
            curr = a[i];
        else
            curr = curr + a[i];

        if (curr > maxSoFar)
            maxSoFar = curr;
    }

    printf("%d", maxSoFar);
    return 0;
}

 */
