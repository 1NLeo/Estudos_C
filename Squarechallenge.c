#include <stdio.h>

int main (){

    int t = 0;
    int a = 0,b = 0,c = 0,d = 0;

    scanf ("%d", &t);

    for (int i = 0; i < t; i++) {
    a = 0, b = 0, c = 0, d =0;

        for (int j = 0; j < 1; i++){
            scanf ("%d", &a);
            scanf ("%d", &b);
            scanf ("%d", &c);
            scanf ("%d", &d);

            if (a == b && b == c && c == d) {
            printf ("YES\n");
            break;
        }

        else {
            printf ("NO\n");
            break;
        }

        }
        

    }

    return 0;
}