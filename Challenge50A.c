#include <stdio.h>

// Challenge Summary
// We need to calculate the maximum number
// of $2 \times 1$ dominoes that can fit onto an $M \times N$ rectangular grid without overlapping and without extending past the 
// boundaries of the board. The dominoes can be rotated horizontally or vertically.

// Input
// In a single line you are given two integers M and N — board sizes in squares (1 ≤ M ≤ N ≤ 16).

// Output
// Output one number — the maximal number of dominoes, which can be placed.

int main () {

int m = 0, n = 0, s;

scanf ("%d", &m);

scanf ("%d", &n);

s = (m * n) / 2;

printf ("%d", s);

return 0;
}