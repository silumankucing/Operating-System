#include <stdio.h>

#include "memaddr.h"
#include "array.h"
#include "data_type.h"
#include "calc.h"

int main() {
    int choice;

    printf("Choose an option:\n");
    printf("1. Call memaddr_function\n");
    printf("2. Call array_function\n");
    printf("3. Call data_type_function\n");
    printf("4. Call calc_function\n");
    printf("Enter your choice (1-4): ");
    scanf_s("%d", &choice);

    switch (choice) {
    case 1:
        memaddr_function();
        break;
    case 2:
        array_function();
        break;
    case 3:
        data_type_function();
        break;
    case 4:
        calc_function();
        break;
    default:
        printf("Invalid choice!\n");
        break;
    }

    return 0;
}
