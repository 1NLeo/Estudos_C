#include <stdio.h>
// Global Scope. Better to use than the local scope.

int result; // Result is the global scope

void addnumbers(int number1, int number2){
    result = number1 + number2;
    printf ("Result = %d", result);
}

int main (){

    addnumbers (6,7);

    return 0;
}