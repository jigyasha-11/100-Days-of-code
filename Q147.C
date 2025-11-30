//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

// Define structure for employee
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *file;
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        getchar(); // Consume leftover newline

        printf("Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = 0; // Remove newline

        printf("ID: ");
        scanf("%d", &employees[i].id);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Write employee data to binary file
    file = fopen("employees.bin", "wb");
    if (file == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    fwrite(employees, sizeof(struct Employee), n, file);
    fclose(file);
    printf("\nEmployee data written to employees.bin successfully.\n");

    // Read employee data from binary file
    file = fopen("employees.bin", "rb");
    if (file == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    struct Employee readEmployees[n];
    fread(readEmployees, sizeof(struct Employee), n, file);
    fclose(file);

    // Display employee data
    printf("\nEmployee Details from file:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", readEmployees[i].name);
        printf("ID: %d\n", readEmployees[i].id);
        printf("Salary: %.2f\n", readEmployees[i].salary);
    }

    return 0;
}
