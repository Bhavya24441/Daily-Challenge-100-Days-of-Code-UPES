/*
// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, n;
    float simple_interest, compound_interest;

    printf("Enter the principal amount:\n");
    scanf("%f", &principal);

    printf("Enter the rate (annual interest rate in %%):\n");
    scanf("%f", &rate);

    printf("Enter the time (in years):\n");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;

    printf("For compound interest, enter the number of times interest is compounded per year (n):\n");
    scanf("%f", &n);

    compound_interest = principal * pow((1 + rate / (100 * n)), n * time) - principal;

    printf("The simple interest is: %.2f\n", simple_interest);
    printf("The compound interest is: %.2f\n", compound_interest);

    return 0;
}
*/


/*
//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main(){
    int time;
    int hour;
    int minutes;
    int seconds;

    printf("Enter the time in seconds to convert in the specified format:");
    scanf("%d", &time);

    hour = time / 3600;
    minutes = (time % 3600) / 60;
    seconds = time % 60;

    printf("The time is %d:%d:%d\n", hour, minutes, seconds);

    return 0;
}
*/


