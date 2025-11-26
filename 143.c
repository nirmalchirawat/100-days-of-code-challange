//Find and print the student with the highest marks.
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student students[5], top_student;
    int i, top_index = 0;

    for(i = 0; i < 5; i++) {
        printf("Enter roll, name, marks for student %d:\n", i+1);
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
    }

    top_student = students[0];
    for(i = 1; i < 5; i++) {
        if(students[i].marks > top_student.marks) {
            top_student = students[i];
        }
    }

    printf("\nStudent with highest marks:\n");
    printf("Roll: %d, Name: %s, Marks: %.2f\n", top_student.roll, top_student.name, top_student.marks);

    return 0;
}
