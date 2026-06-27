#include <stdio.h>

int main (){

        int v[5] = {10,20,30,40,50};
        int s = 0;

        for (int i =0; i < 5; i++) {

            s = v[i] + s;

        }

        printf ("%d", s/5);

    return 0;
}