#include <stdio.h>
#include <string.h>

struct student {
    char name[25];
    char email[25];
    char regNo[20];
    int phone;
    float marks;
} student1, student2;

int main() {
    // Assign values to student1
    strcpy(student1.name, "Paul Osamo");
    strcpy(student1.email, "paulosamo12@gmail.com");
    student1.phone = 110612124;  // phone is an int, no need to use an array here
    strcpy(student1.regNo, "ct102/21877/24");
    student1.marks = 87.5;
    
    // Print values for student1
    printf("Name: %s\n", student1.name);
    printf("Email: %s\n", student1.email);
    printf("Phone: %d\n", student1.phone);  // Use %d for integers
    printf("Reg No: %s\n", student1.regNo);
    printf("Marks: %.2f\n", student1.marks);  // Use %.2f for floating point

    return 0;
}
