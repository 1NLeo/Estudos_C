#include <stdio.h>

int main () {

    int x = 200;
    int *y = &x;
    x = 15;
    *y = 20;
    // The value depends of the order of the pointer and the adress
    printf ("%d\n", *y);
    printf ("%d\n", x);
    // But the pointer changes both values as well.
    *y = 150;
     x = 200;
    

    printf ("%d\n", *y);
    printf ("%d\n", x);

    return 0;
}