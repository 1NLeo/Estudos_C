#include <stdio.h>

int main  () {
    
    int a = 0,  b = 0, c = 0, t = 0;

    scanf ("%d", &t);

    for (int i = 0; i < t; i++) {
    int rounds = 0;
        scanf ("%d", &a);
        scanf ("%d", &b);
        scanf ("%d", &c);

        while (a != b || a != c || b != c) {
            if ( a == b || a == c || b == c) {
                break;
            }
            if (a > b && a > c) {
                if (b < c) {
                    a = a - 1;
                    b = b + 1;
                    rounds++;
                }
                else {
                    a = a - 1;
                    c = c - 1;
                    rounds++;
                }
            }

             else if (b > a && b > c) {
                if (a < c) {
                    b = b - 1;
                    a = a + 1;
                    rounds++;
                }
                else {
                    b = b - 1;
                    c = c - 1;
                    rounds++;
                }
            }

             else {
                if (b < a) {
                    c = c - 1;
                    b = b + 1;
                    rounds++;
                }
                else {
                    c = c - 1;
                    a = a - 1;
                    rounds++;
                }
            }
        }
        printf ("%d\n", rounds);
    }
}