//Check if the elements on the diagonal of a matrix are distinct.
/*
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n], distinct = 1;

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i][i] == a[j][j])
                distinct = 0;

    if (distinct)
        printf("Diagonal elements are distinct");
    else
        printf("Diagonal elements are not distinct");

    return 0;
}

 */


//Find the sum of main diagonal elements for a square matrix.
/*
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n], sum = 0;

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < n; i++)
        sum += a[i][i];

    printf("Sum of main diagonal: %d", sum);
    return 0;
}

 */


