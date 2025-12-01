//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
/*
#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("File could not be opened");
        return 0;
    }

    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    char name[100];
    int roll;
    float marks;

    for (int i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("File could not be opened for reading");
        return 0;
    }

    printf("\nStored Records:\n");

    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3)
        printf("%s %d %.2f\n", name, roll, marks);

    fclose(fp);
    return 0;
}

 */