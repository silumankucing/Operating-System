#include <stdio.h>
#include <stdbool.h>

int data_types() {
    // Integer types
    int a = 10;
    unsigned int b = 20;
    short c = 30;
    long d = 40;
    long long e = 50;

    // Floating-point types
    float f = 3.14f;
    double g = 2.71828;
    long double h = 1.6180339887L;

    // Character types
    char i = 'A';
    unsigned char j = 255;
    signed char k = -128;

    // Boolean type
    bool l = true;

    // Print the values
    printf("int: %d\n", a);
    printf("unsigned int: %u\n", b);
    printf("short: %hd\n", c);
    printf("long: %ld\n", d);
    printf("long long: %lld\n", e);
    printf("float: %.2f\n", f);
    printf("double: %.5f\n", g);
    printf("long double: %.10Lf\n", h);
    printf("char: %c\n", i);
    printf("unsigned char: %u\n", j);
    printf("signed char: %d\n", k);
    printf("bool: %d\n", l);

    return 0;
}
