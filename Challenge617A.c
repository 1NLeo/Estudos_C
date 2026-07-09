    #include <stdio.h>
    /*
Challenge Summary
An elephant at point 0 wants to reach a friend's house at point x. In a single step, the elephant can move forward by 1, 2, 3, 4, or 5 positions. We need to find the minimum number of steps required to reach exactly or pass point x (or rather, reach point x efficiently using the maximum possible step size of 5).

Input
Line 1: A single integer x (1 <= x <= 1,000,000) — the coordinate of the friend's house.

Output
Print a single integer — the minimum number of steps needed to reach point x.
*/
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
