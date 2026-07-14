#include <stdio.h>

int main () {

    int n = 0, x = 0, t = 0;

    scanf ("%d", &t);

    for (int i = 0; i < t; i++) {
        int sum = 0;
        scanf ("%d", &x);
        scanf ("%d", &n);

        for (int j = 1; j < n + 1; j++) {
            if (j % 2 == 0) {
                sum += -x;
            }
             else {
                sum += x;
             }
        }   

        printf ("%d\n", sum);
    }

    return 0;
}