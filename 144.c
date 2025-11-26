//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void printStudent(struct Student s) {
    printf("Roll: %d, Name: %s, Marks: %.2f\n", s.roll, s.name, s.marks);
}

int main() {
    struct Student student = {101, "Alice", 89.5};
    printStudent(student);
    return 0;
}
