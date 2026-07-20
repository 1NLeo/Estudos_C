#include <stdio.h>
#include <ctype.h> 

// Transforming character into lower and uppercases with <ctype.h>

int main () {

    char alpha = 'e';
    char upper = toupper(alpha);

    printf ("%c", upper);

    char lower = tolower(alpha);

    alpha = 'E';
    printf ("%c", lower );

    return 0;
}