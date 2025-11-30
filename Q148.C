//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

// Function to check if two students are identical
int areIdentical(struct Student s1, struct Student s2) {
    if (s1.rollNo == s2.rollNo && s1.marks == s2.marks && strcmp(s1.name, s2.name) == 0) {
        return 1; // identical
    } else {
        return 0; // not identical
    }
}

int main() {
    struct Student student1, student2;

    // Input details of first student
    printf("Enter details of first student:\n");
    printf("Roll No: ");
    scanf("%d", &student1.rollNo);
    printf("Name: ");
    scanf(" %[^\n]s", student1.name); // to read string with spaces
    printf("Marks: ");
    scanf("%f", &student1.marks);

    // Input details of second student
    printf("\nEnter details of second student:\n");
    printf("Roll No: ");
    scanf("%d", &student2.rollNo);
    printf("Name: ");
    scanf(" %[^\n]s", student2.name);
    printf("Marks: ");
    scanf("%f", &student2.marks);

    // Check if they are identical
    if (areIdentical(student1, student2)) {
        printf("\nBoth students are identical.\n");
    } else {
        printf("\nStudents are not identical.\n");
    }

    return 0;
}

