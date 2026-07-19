#include <stdio.h>

int main () {

    char a = '5'; // Automatically convert to ASCII value, so 5 becomes -> 48 + 5 = 53
    // For example. If a = `0` the ASCII would change its value to 48, so result = 48 + 9 = 57

    int b = 9;

    int result = a + b;

    printf ("%d", result);

    return 0;
}