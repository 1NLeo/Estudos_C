    #include <stdio.h> 
    // k = cost of the first banana
    // n = inicial number of dollars
    // w = number of bananas he wants

    int main () {

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