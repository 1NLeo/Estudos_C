/*
Exercise 4 — Pointer modifying a float

Declare a float variable `preco = 9.99;` and a pointer `float *p` pointing to it. Using the pointer (i.e., `*p = ...`),
change the value of `preco` to 15.50. Then print `preco` (the original variable, not the pointer) 
to confirm that the value has changed.

Objective: to practice the concept that modifying `*p` changes the original variable, 
even without directly manipulating `preco` in the code.
*/

#include <stdio.h>

    int main () {

    float price = 9.99;

    float *p;

    p = &price;

    *p = 15;
    
    printf ("Price: %.2f\n", price);
    printf ("P: %.2f", *p);

    return 0;
}