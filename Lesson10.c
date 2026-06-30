#include <stdio.h>

int main (){

    char s[16];

    printf ("Enter something (Convencional Scanf): ");
    scanf ("%s", s);
    

    printf ("%s\n\n", s);

    printf ("Enter something (Enhanced Scanf): ");
    scanf(" %15[^\n]s", s);

    printf ("%s\n", s);
    

    return 0;
}


