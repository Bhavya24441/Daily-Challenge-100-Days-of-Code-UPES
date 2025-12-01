//Store employee data in a binary file using fwrite() and read using fread().
/*
#include <stdio.h>

struct Employee {
    char name[100];
    int id;
    float salary;
};

int main() {
    struct Employee e[3];
    FILE *fp;

    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("File could not be opened");
        return 0;
    }

    for (int i = 0; i < 3; i++) {
        printf("Enter name: ");
        scanf("%s", e[i].name);
        printf("Enter ID: ");
        scanf("%d", &e[i].id);
        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
    }

    fwrite(e, sizeof(struct Employee), 3, fp);
    fclose(fp);

    printf("\nData written to employees.dat\n");

    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading");
        return 0;
    }

    struct Employee temp[3];
    fread(temp, sizeof(struct Employee), 3, fp);
    fclose(fp);

    printf("\nEmployee Details (Read from File):\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, ID: %d, Salary: %.2f\n",
               temp[i].name, temp[i].id, temp[i].salary);
    }

    return 0;
}
*/