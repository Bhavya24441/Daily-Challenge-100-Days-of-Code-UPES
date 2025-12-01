
//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
/*


#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid side lengths. All sides must be positive.\n");
    } else if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Invalid triangle. The sum of any two sides must be greater than the third.\n");
    } else if (a == b && b == c) {
        printf("Equilateral Triangle\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles Triangle\n");
    } else {
        printf("Scalene Triangle\n");
    }

    return 0;
}
*/


//Write a program to display the day of the week based on a number (1–7) using switch-case.
/*
#include <stdio.h>

int main() {
    int day;

    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}

*/