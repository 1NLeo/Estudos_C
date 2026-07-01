#include <stdio.h>

//Read a bidimensional array 4×4 and calculate the addition between all the elements.

int main () {

    int a, b, x, y, i, j, add = 0;
    
    printf ("Enter a number: ");
    scanf ("%d", &a);

    printf ("Enter a number: ");
    scanf ("%d", &b);

    printf ("Enter a number: ");
    scanf ("%d", &x);

    printf ("Enter a number: ");
    scanf ("%d", &y);

    int nums[2][2] = {{a, b}, 
                      {x, y}};



     for (j = 0; j < 2; j++){ 

      for (i = 0; i < 2; i++) {
        printf ("%d ", nums[j][i]);
        add = nums[j][i] + add;
      }
      printf ("\n");
     }
        
     printf ("%d", add);


    return 0;
}