//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *file;
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter name: ");
        getchar(); // Consume leftover newline
        fgets(students[i].name, sizeof(students[i].name), stdin);
        // Remove newline character from fgets
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // Write student records to file
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }

    fclose(file);
    printf("\nStudent records saved to students.txt successfully.\n");

    // Read and display student records
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    while(fscanf(file, "%s %d %f", students[0].name, &students[0].roll, &students[0].marks) == 3) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", students[0].name, students[0].roll, students[0].marks);
    }

    fclose(file);
    return 0;
}
