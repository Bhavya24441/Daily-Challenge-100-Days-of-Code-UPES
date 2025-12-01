//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
/*
#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("numbers.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    int num, sum = 0, count = 0;

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found");
        return 0;
    }

    double avg = (double)sum / count;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f", avg);

    return 0;
}

 */