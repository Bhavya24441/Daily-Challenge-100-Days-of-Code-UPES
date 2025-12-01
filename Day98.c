//Take two structs as input and check if they are identical.
/*
#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1, s2;

    printf("Enter first student's name: ");
    scanf("%s", s1.name);

    printf("Enter first student's roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter first student's marks: ");
    scanf("%f", &s1.marks);

    printf("\nEnter second student's name: ");
    scanf("%s", s2.name);

    printf("Enter second student's roll number: ");
    scanf("%d", &s2.roll_no);

    printf("Enter second student's marks: ");
    scanf("%f", &s2.marks);

    if (s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks &&
        strcmp(s1.name, s2.name) == 0)
        printf("\nBoth structures are identical");
    else
        printf("\nStructures are different");

    return 0;
}
*/