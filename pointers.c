#include <stdio.h>

int main () {

    int age = 25;

    int* ptr = &age;

    printf ("Address: %p\n", ptr);

    printf ("Value: %d\n", *ptr);

    *ptr = 31;

    printf ("%d\n", age);


    // Example

    // int main () {

    // int number;
    // int* ptr;

    // ptr = number; Invalid (ptr is a pointer that can oly store memory adress, but number is not a memory adress)
    // *ptr = &number; Invalid (ptr gives the value stored in the ptr location, however &number gives the memory adress)
    // ptr = &number; Valid (both ptr and &number represents the memory address)
    // *ptr = number; Valid (both ptr and number represents the value stored in the memory location)
    
    // }
    return 0;
}