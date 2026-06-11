#include <stdio.h>
#include <string.h>

int main () {

    char word [100];
    int length = 0 ;
    int rep = 0;

    scanf ("%d", &rep);

    for (int i = 0; i < rep; i++ ) {

        scanf ("%s", &word);

        length = strlen (word);
        
        if (length > 10) {

            printf ("%c%d%c\n", word [0], length - 2, word [length - 1]  );
        }

        else {

            printf ("%s\n", word);
        }

        int length = 0;
        word [0] = '\0';
    
    }

    return 0;
}
