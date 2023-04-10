#include <stdio.h>

// function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

int main() {
    // define an array of pointers to function
    int (*func_ptr_array[3])(int, int) = {add, subtract, multiply};

    // call functions using the array
    int a = 10, b = 5;
    printf("a + b = %d\n", (*func_ptr_array[0])(a, b));
    printf("a - b = %d\n", (*func_ptr_array[1])(a, b));
    printf("a * b = %d\n", (*func_ptr_array[2])(a, b));

    return 0;
}

// function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}