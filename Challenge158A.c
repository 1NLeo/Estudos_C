#include <stdio.h>

int main ()

{
    int n = 0, k = 0, a = 0, s = 0;

    scanf ("%d", &n);

    scanf ("%d", &k);

    for (int i = 0; i < n; i++) {

    scanf ("%d", &a);    
    
        if (a > k) {
        
            s++;

        }
    }

    printf ("%d", s);

    return 0;
}