#include <stdio.h>

int main (){

    int mat [3][3] = {{1, 2, 3}, 
                      {4, 5, 6}, 
                      {7, 8, 9}};

    int i, m;

        printf ("Printing the first line: ");

        for (int i = 0; i < 3; i++ ){

            printf ("%d \n", mat [0][i]);

        }

        printf ("Printing the etire matrice: \n");

        for (m = 0; m < 3; m++) {
            
            for (i = 0; i < 3; i++){

                printf ("%d ", mat [m][i]);

            }
            printf ("\n");
        }

    return 0;
}