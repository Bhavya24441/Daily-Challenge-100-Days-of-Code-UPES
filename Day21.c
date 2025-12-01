//Write a program to swap the first and last digit of a number.
/*
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;
    int middleNum, powerOfTen;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    digits = (int)log10(num);

    powerOfTen = (int)pow(10, digits);

    firstDigit = num / powerOfTen;

    middleNum = num % powerOfTen;
    middleNum = middleNum / 10;

    swappedNum = lastDigit * powerOfTen + middleNum * 10 + firstDigit;

    printf("Original number: %d\n", num);
    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
*/

//Write a program to check if a number is a perfect number.
/*
#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == num && num > 0) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
*/
