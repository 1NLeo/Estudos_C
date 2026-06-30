#include <stdio.h>

int main (){

    char s[16];

    printf ("Enter something (Convencional Scanf): ");
    scanf ("%s", s);

    fflush(stdin); // Used to remove the memory trash

    printf ("%s\n\n", s);

    printf ("Enter something (Enhanced Scanf): ");
    scanf(" %15[^\n]s", s);
    fflush(stdin);

    printf ("%s\n", s);
    

    return 0;
}


