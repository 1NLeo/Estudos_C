#include <stdio.h>

int main (){

    char s[16];

    printf ("Enter something (Reading with GETS): \n");
    gets (s); // not recommended to use. No vector limit
    fflush (stdin);

    puts ("Result: ");
    puts (s);
    puts ("");

    printf ("Enter something (Reading with FGETS): \n");
    fgets (s, 15, stdin); 
    fflush (stdin);

    puts ("Result: ");
    puts (s);
    



    return 0;
}