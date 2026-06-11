#include <stdio.h>

int main (){

    int rep, val = 0;

    char op [450];

    scanf ("%d", &rep);

    for (int i = 0; i < rep; i++) {

        scanf ("%s", op);

        if (op [1] == '+') {
            val++;

        }

        else {
            val--;
        }

    }

    printf ("%d", val);
 
        return 0;
}