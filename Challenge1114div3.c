#include <stdio.h>

int main  () {
    
    int a = 0,  b = 0, c = 0, t = 0;

    scanf ("%d", &t);

    for (int i = 0; i < t; i++) {
    int rounds = 0;
        scanf ("%d", &a);
        scanf ("%d", &b);
        scanf ("%d", &c);

        while (a != b && a != c && b != c) {
           
            if (a > b && a > c) {
                if (b < c) {
                    a--;
                    b++;
                }
                else {
                    a--;
                    c++;
                }
            }

             else if (b > a && b > c) {
                if (a < c) {
                    b--;
                    a++;
                }
                else {
                    b--;
                    c++;
                }
            }

             else {
                if (b < a) {
                    c--;
                    b++;
                }
                else {
                    c--;
                    a++;
                }
            }
                rounds++;
        }
        printf ("%d\n", rounds);
    }
}