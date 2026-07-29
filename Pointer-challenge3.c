// Challenge 3:
//Write void swap(int *a, int *b) that swaps the content inside to variables, and test on the main.
#include <stdio.h>

    void swap (int *a, int *b) {

        int c = *a;
        *a = *b;
        *b = c;
        
    } 

int main () {

    int num1 = 15;
    int num2 = 20;

    printf ("BEFORE the swap:\n");
    printf ("A = %d\n", num1);
    printf ("B = %d\n", num2);

    swap (&num1, &num2); //int *a e int *b esperam receber um endereço já que eles são ponteiros

    printf ("AFTER the swap:\n");
    printf ("A = %d\n", num1);
    printf ("B = %d\n", num2);
    return 0; 
}