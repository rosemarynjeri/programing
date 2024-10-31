#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    FILE *file;
    struct Student students[5];
    
    // Input data
    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    // Write to file
    file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(students, sizeof(struct Student), 5, file);
    fclose(file);

    // Read from file and display
    file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fread(students, sizeof(struct Student), 5, file);
    fclose(file);

    // Display data
    printf("\nStudent Data:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    return 0;
}