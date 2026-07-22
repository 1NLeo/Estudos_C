#include <stdio.h>

int main () {

    int x = 0, z = 0, test = 0;

    scanf ("%d", &test);

    for (int i = 0; i < test; i++) {
        
        scanf ("%d", &x);
        scanf ("%d", &z);
       
        if (x % z == 0) {
            printf ("YES\n");
        }

        else {
            printf ("NO\n");
        }
    }

    return 0;
}