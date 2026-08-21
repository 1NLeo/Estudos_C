#include <stdio.h>

int main () {

    int c = 0;


    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 2; j++) {
            for (int k = 0; k <= 2; k++) {
                c++;
            }
        }
    }

    printf ("%d", c);
    return 0;
}