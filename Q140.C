//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

// Define enum for gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define struct for a person
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    // Input person details
    printf("Enter name: ");
    fgets(p.name, sizeof(p.name), stdin);
    // Remove newline from fgets
    p.name[strcspn(p.name, "\n")] = 0;

    printf("Enter age: ");
    scanf("%d", &p.age);

    int genderChoice;
    printf("Select gender (0 for MALE, 1 for FEMALE, 2 for OTHER): ");
    scanf("%d", &genderChoice);
    p.gender = genderChoice; // Assign enum value

    // Print person details
    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

    printf("Gender: ");
    switch(p.gender) {
        case MALE:   printf("MALE\n"); break;
        case FEMALE: printf("FEMALE\n"); break;
        case OTHER:  printf("OTHER\n"); break;
        default:     printf("Unknown\n");
    }

    return 0;
}
