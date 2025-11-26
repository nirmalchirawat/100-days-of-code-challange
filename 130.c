/*Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    FILE *file;
    struct Student student;
    int choice;

    file = fopen("students.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    do {
        printf("Enter student name: ");
        scanf("%s", student.name);
        printf("Enter roll number: ");
        scanf("%d", &student.roll_no);
        printf("Enter marks: ");
        scanf("%f", &student.marks);

        fprintf(file, "%s %d %.2f\n", student.name, student.roll_no, student.marks);

        printf("Do you want to add another record? (1: Yes, 0: No): ");
        scanf("%d", &choice);
    } while (choice == 1);

    fclose(file);

    file = fopen("students.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("\nStudent Records:\n");
    while (fscanf(file, "%s %d %f", student.name, &student.roll_no, &student.marks) == 3) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", student.name, student.roll_no, student.marks);
    }

    fclose(file);

    return 0;
}