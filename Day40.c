//Perform diagonal traversal of a matrix.
/*
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal traversal:\n");

    for (int start = 0; start < r; start++) {
        int i = start, j = 0;
        while (i >= 0 && j < c) {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }

    for (int start = 1; start < c; start++) {
        int i = r - 1, j = start;
        while (i >= 0 && j < c) {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }

    return 0;
}

 */


//Multiply two matrices.
/*
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible");
        return 0;
    }

    int a[r1][c1], b[r2][c2], m[r1][c2];

    printf("Enter first matrix:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for (int i = 0; i < r2; i++)
        for (int

 */