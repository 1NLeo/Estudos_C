    #include <stdio.h>
    //Target: Find the minimum number of operations to reach a given integer x.
   //Constraint: Each operation can add 1, 2, 3, 4, or 5 to your current total.
    
    int main () {

        int x = 0, ele = 0;

        scanf ("%d", &x);

        ele = x / 5;


         if (x % 5 != 0 ) {
            
            ele++;

        }

        if (ele < 1) {

            ele = 1;

        }

        printf ("%d", ele);

        return 0;
    }
