#include <stdio.h>

// Challenge Summary
// We need to count how many contestants qualify to advance to the next round of a competition. 
// A contestant advances if their score is strictly positive (greater than zero) and is at least 
// equal to the score of the k-th place finisher. We are given the total number of participants (n),
// the target position (k), and an ordered list of all participants' scores from highest to lowest.

//Input
//The first line of the input contains two integers n and k (1 ≤ k ≤ n ≤ 50) separated by a single space.
//The second line contains n space-separated integers a1, a2, ..., an (0 ≤ ai ≤ 100), where ai is the score
// earned by the participant who got the i-th place. The given sequence is non-increasing 
//(that is, for all i from 1 to n - 1 the following condition is fulfilled: ai ≥ ai + 1).  

//Output  
//Output the number of participants who advance to the next round.

int main ()

{
    int n = 0, k = 0, a = 0, s = 0;

    scanf ("%d", &n);

    scanf ("%d", &k);

    for (int i = 0; i < n; i++) {

    scanf ("%d", &a);    
    
        if (a > k) {
        
            s++;

        }
    }

    printf ("%d", s);



    return 0;
}