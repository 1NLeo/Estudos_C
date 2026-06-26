#include <stdio.h>


// "do-while" the condition is only tested in the end. 
// The command block is executed at least once.
int main () {

    int i = 1;

    do {
        printf ("%d\n", i);
        i++;
    } while (i <= 10);


    return 0;
}