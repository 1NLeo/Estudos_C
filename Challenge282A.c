#include <stdio.h>

// Challenge SummaryWe need to simulate a program written in Bit++, which has a single variable $x$ initially set to 0.
// We process $n$ statements, each either incrementing (++) or decrementing (--) the value of $x$ by 1.
// The variable and operation can appear in any order (e.g., ++X or X++). The goal is to output the final value of $x$.

// Input
// Line 1: An integer $n$ ($1 \le n \le 150$) — number of statements.
// Next $n$ lines: A single Bit++ statement (++X, X++, --X, or X--) per line.

// Output
// A single integer — the final value of $x$.

int main (){

    int rep, val = 0;

    char op [450];

    scanf ("%d", &rep);

    for (int i = 0; i < rep; i++) {

        scanf ("%s", op);

        if (op [1] == '+') {
            val++;

        }

        else {
            val--;
        }

    }

    printf ("%d", val);
 
        return 0;
}