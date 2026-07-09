#include <stdio.h>

/*
Challenge Summary
We need to calculate how many years it will take for Limak to become strictly heavier than Bob. 
Limak starts with weight a and Bob with weight b. Every year, Limak's weight triples while Bob's weight doubles. 
We must find the minimum number of years required for a > b.

Input
Line 1: Two integers a and b (1 <= a <= b <= 10) — the initial weights of Limak and Bob respectively.

Output
A single integer — the number of full years after which Limak becomes strictly heavier than Bob.
*/

int main () {

    int a, b, year = 0;

    scanf ("%d", &a);
    
    scanf ("%d", &b);


    while (a <= b) {

           a *= 3;
          b *= 2;

            year++;
           
    }

     printf ("%d", year);

        

    return 0;
}