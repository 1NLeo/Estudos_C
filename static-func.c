#include <stdio.h>


int f(void) {
    static int x = 1; // The static var saves its value even after an operation is done.
    x = 2 * x + 1;
    return x;
}

int main(void) {
    int a = f(); // x = 3
    int b = f(); // x = 7
    int c = f(); // x = 15
    printf("%d", a + b - c); // 10 - 15 = -5

    return 0;
}