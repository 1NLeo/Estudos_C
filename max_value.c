#include <stdio.h>

int main () {

    int a, b, c;

    scanf ("%d", &a);
    scanf ("%d", &b);        
    scanf ("%d", &c);  

   int results[6] = {
        a + b + c,
        a * b * c,
        (a + b) * c,
        a * (b + c),
        a + (b * c),
        (a * b) + c
    };

    int max[0];

    for (int i = 0; i < 6; i++) {
        if (results[i] > max[0]) {
            max[0] = results[i];
        }
    }

    printf ("%d", max[0]);

    return 0;
}