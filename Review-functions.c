#include <stdio.h>

void calculator () {

    int opt = 0, number1, number2;

    do {
    printf ("Enter one option: \n");
    printf ("|Calculator| \n");
    printf ("|[1] Sum   | \n");
    printf ("|[2] Exit  | \n");
    scanf ("%d", &opt);

        if (opt == 1){
            printf ("Enter an integer: \n");
            scanf ("%d", &number1);

            printf ("Enter another number: \n");
            scanf ("%d", &number2);

            int sum = number1 + number2;

            printf ("The sum of %d and %d is equal to: %d \n", number1, number2, sum );
        }

        else {
            printf ("Exiting...");
        }
    } while  (opt != 2);

    }


int main () {

    calculator ();
    
    return 0;
}