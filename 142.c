//Store details of 5 students in an array of structures and print all.
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student students[5];
    int i;
    for(i = 0; i < 5; i++) {
        printf("Enter roll, name and marks for student %d:\n", i+1);
        scanf("%d", &students[i].roll);
        scanf("%s", students[i].name);
        scanf("%f", &students[i].marks);
    }
    printf("\nDetails of all students:\n");
    for(i = 0; i < 5; i++) {
        printf("Roll: %d\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
    return 0;
}
