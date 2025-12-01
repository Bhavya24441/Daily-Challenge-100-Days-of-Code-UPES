//Write a program to check if a number is a strong number.
/*
#include <stdio.h>

int main() {
    int num, originalNum, digit, i;
    int fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        digit = num % 10;

        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        num = num / 10;
    }

    if (sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}
*/

//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
/*
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    double numerator, denominator;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            sum = sum + 1.0;
        } else {
            numerator = (double)(2 * i - 1);
            denominator = (double)(2 * i);
            sum = sum + (numerator / denominator);
        }
    }

    printf("The sum of the series up to %d terms is: %lf\n", n, sum);

    return 0;
}
 */