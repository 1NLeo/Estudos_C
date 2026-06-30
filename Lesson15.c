#include <stdio.h>
#include <string.h>
#include <locale.h>

#define n 50

int main (){

    char hardtxt[n] = {"hello"};
    char usrpass[n];
    int res;

    do {
        printf ("Enter a text: ");
        fgets (usrpass, 49, stdin );

        usrpass[strcspn(usrpass, "\n")] = '\0';  // removes the \n

        res = strcmp(hardtxt, usrpass);

        if (res == 0) {
            printf ("The text is the same.\n");
        }
        else {
            printf ("The text is different.\n");
        }
    
    } while (res != 0);



    return 0;
}