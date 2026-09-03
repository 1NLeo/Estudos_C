#include <stdio.h>

int main () {

    int t = 0;
    int a, b, c;

    scanf ("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf ("%d", &a);
        scanf ("%d", &b);
        scanf ("%d", &c);

        if (a + b == c) {
            printf ("+\n");
        }

        else {
            printf ("-\n");
        }

    }

    return 0;
}