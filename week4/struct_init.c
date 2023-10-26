#include <stdio.h>
#include <string.h>

struct student {
    char name [100];
    char student_id [11]; // Assuming 10 digits.
    unsigned mark;
};

int main () {    
    struct student new_student;
    printf("Enter name: ");
    scanf("%s",new_student.name); // scanf does not work when there is a space in the input
    printf("Enter student ID: ");
    scanf("%s",new_student.student_id);
    printf("Enter mark: ");
    scanf("%u",&new_student.mark);

    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %u\n", new_student.mark);
    return 0;
}