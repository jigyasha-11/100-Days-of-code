//Print all enum names and integer values using a loop.
#include <stdio.h>

// Define enumeration for menu choices
enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    // Array of enum names as strings
    const char *menuNames[] = {"ADD", "SUBTRACT", "MULTIPLY"};

    printf("Enum names and their integer values:\n");
    for (int i = ADD; i <= MULTIPLY; i++) {
        printf("%s = %d\n", menuNames[i - 1], i);
    }

    return 0;
}
