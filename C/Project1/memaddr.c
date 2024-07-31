#include <stdio.h>

int memaddr() {
    int var1 = 10;      // Declare an integer variable and initialize it
    int var2 = 25;
    int* ptr1;          // Declare a pointer to an integer

    ptr1 = &var1;        // Assign the address of var to the pointer ptr

    printf("Value of var: %d\n", var1);
    printf("Address of var1: %p\n", ptr1);  // Print the address of the variable using the pointer
    printf("Address of var2: %p\n\n", &var2);    // Print the value of the variable
    printf("Value at the address pointed by ptr: %d\n", *ptr1);  // dereference of pointer 1

    return 0;
}