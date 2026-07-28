/*
 * Create a program to find the multiplication of
 * two numbers using a function and pointers.
 *
 * - Create a function that accepts three
 *   pointers.
 *
 * - Inside the function multiply values of two
 *   pointers and assign the result to the address
 *   of the third pointer.
 *
 * - Inside the main function, create three
 *   variables, two variables with values 13 and 9
 *   and the third variable to store their product.
 *
 * - Call the function with addresses of the 3
 *   variables as arguments.
 *
 * - Store the returned value inside a pointer and
 *   print the value pointed by the returned
 *   address.
 */

#include <stdio.h>

int* mult (int* num1, int* num2, int* result) {

    *result = *num1 * *num2;

    return result;

}

int main () {

    int number1 = 13; 
    int number2 = 9;
    int multiply;

    int* result = mult (&number1, &number2, &multiply);

    printf ("Result: %d", *result);

    return 0;
}