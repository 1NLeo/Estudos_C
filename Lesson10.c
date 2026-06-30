#include <stdio.h>

int main (){

    char s[50];

    printf ("Enter something (Convencional Scanf): ");
    scanf ("%s", s);
    

    printf ("%s\n\n", s);

    printf ("Enter something (Enhanced Scanf): ");
    scanf(" %49[^\n]", s);

    printf ("%s\n", s);
    

    return 0;
}


