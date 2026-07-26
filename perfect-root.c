#include <stdio.h>

int main () {

    int root = 1; // Roots
    int t = 0; // Test cases
    int n = 0; // Number of roots

    scanf ("%d", &t);

        for (int i = 0; i < t; i++){
            scanf ("%d", &n);

            for (int j = 0; j < n; j++){
                printf("%d\n", root);
                root++;
            }
        }


    return 0;
}