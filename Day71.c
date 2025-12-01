//Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
/*
#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("File could not be created");
        return 0;
    }

    char name[100];
    int age;

    printf("Enter name: ");
    scanf("%[^\n]", name);

    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("Data successfully saved to info.txt");
    return 0;
}

 */