#include <stdio.h>

int main (){

        int v[5] = {10,20,30,40,50};
        int s = 0;

        for (int i =0; i < 5; i++) {

            printf ("Type a number:");
            scanf ("%d", &v[i]);
        }

            printf ("Entered data: \n");

            for (int i = 0; i < 5; i++) {

                printf ("%d \t", v[i]);
            }
    
    return 0;
}