#include <stdio.h>

int main () {

    for (int i = 1; i < 10; i++) {

        if (i == 5) {
            continue; // The continue will make the program ignore the number five and jump to the number 6
        }
    
        printf ("%d\t", i); // `\t` known as the horizontal tabulation. It shows the numbers side by side with a "tab".
                            // We also have the `\v` (Vertical tabulation). It shows the numbers one bellow the other, but like a stair
    }

    return 0;
}