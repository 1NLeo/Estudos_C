// Challenge:
// Declare an int x = 10;, a pointer to it,
// and print the value of x in three different ways: directly, via the *pointer, and the address via %p.

#include <stdio.h>

int main () {

    int x = 10;
    int* a = &x;
    int* b = &x;
    int* c = &x;

    printf ("X value: %d\n", x); 
    printf ("A value: %d\n", *a);
    printf ("B value: %d\n", *b);
    printf ("C value: %d\n", *c);

    printf ("X address: %p\n", &x); // To show the adress of x we use the &
    printf ("A address: %p\n", a); // To show the adress of the pointer we use the variable name itself 
    printf ("B address: %p\n", b); // because they alreadry have the adress of x, use the & on the pointer would show their 
    printf ("C address: %p", c);   // variable address itself

    return 0;
}