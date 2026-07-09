    #include <stdio.h> 
    /*
 Challenge Summary
 We need to calculate how much money a soldier needs to borrow to buy w bananas. The cost of the i-th banana is i * k dollars, 
 making the total cost a summation from 1 to w. If the soldier's initial money n is enough to cover the total cost,
 the output should be 0; otherwise, output the difference.

 Input
 Line 1: Three integers k, n, w (1 <= k, w <= 1000, 0 <= n <= 10^9) — cost of the first banana, initial dollars, 
 and number of bananas wanted.

 Output
 A single integer — the amount of dollars to borrow, or 0 if no borrowing is needed.

*/

    int main () {

    // k = cost of the first banana
    // n = inicial number of dollars
    // w = number of bananas he wants

    int k = 0, n = 0, w = 0, total = 0, borrow = 0;

    scanf ("%d", &k);

    scanf ("%d", &n);

    scanf ("%d", &w);
    w++; 

        for (int i = 1; i < w; i++) {

           total += k * i;
         
        }

        borrow = total - n;

        if (total < n) {
            borrow = 0;
        }

        printf ("%d", borrow);


        return 0;
    }