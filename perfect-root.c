#include <stdio.h>

/*
A positive integer x
 is a perfect root if there exists an integer y
 such that y√=x
. For example, 5
 is a perfect root because 25−−√=5
.

For each test case, output n
 distinct perfect roots. Note that the values only need to be distinct within each test case; you can use the same value in different test cases.

Input
The first line of the input contains a single integer t
 (1≤t≤20
) — the number of test cases.

The only line of each test case contains an integer n
 (1≤n≤20
) — the number of perfect roots to output.

Output
For each test case, output n
 distinct perfect roots. Each perfect root x
 must be in the range 1≤x≤109
*/
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