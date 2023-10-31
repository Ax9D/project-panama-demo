#include <stdio.h>

void print_hello() {
    printf("Hello from C\n");
}

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
