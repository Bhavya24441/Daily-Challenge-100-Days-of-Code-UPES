//Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
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

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    if (k >= 1 && k <= n)
        printf("%d", a[k - 1]);
    else
        printf("-1");

    return 0;
}

 */
