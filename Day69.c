//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
/*
#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n], visited[n+1];
    for (int i = 0; i <= n; i++)
        visited[i] = 0;

    printf("Enter elements: ");
    int repeated = -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (visited[a[i]] == 1) {
            repeated = a[i];
        }
        visited[a[i]] = 1;
    }

    printf("%d", repeated);
    return 0;
}

 */