//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student student;
    struct Student *ptr;

    // Pointer points to the student structure
    ptr = &student;

    // Modify data using pointer
    printf("Enter student details:\n");
    printf("Roll No: ");
    scanf("%d", &ptr->rollNo);  // Access using ->
    printf("Name: ");
    scanf(" %[^\n]s", ptr->name);  // Read string with spaces
    printf("Marks: ");
    scanf("%f", &ptr->marks);

    // Display data using pointer
    printf("\nStudent Details:\n");
    printf("Roll No: %d\n", ptr->rollNo);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
