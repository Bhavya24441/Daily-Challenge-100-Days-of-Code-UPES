//Return a structure containing top student's details from a function.
/*
#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int maxIndex = 0;

    for (int i = 1; i < n; i++)
        if (s[i].marks > s[maxIndex].marks)
            maxIndex = i;

    return s[maxIndex];
}

int main() {
    int n = 5;
    struct Student s[5];

    for (int i = 0; i < n; i++) {
        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    struct Student top = getTopStudent(s, n);

    printf("\nTop Student:\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}

 */