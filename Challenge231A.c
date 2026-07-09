#include <stdio.h>

// Challenge Summary
// We need to calculate the total number of problems a team of three friends will implement during a programming contest.
// The team will only write a solution for a given problem if at least two out of the three friends are sure they know how to solve it.

// Input
// The first input line contains a single integer n (1 ≤ n ≤ 1000) — the number of problems in the contest. 
// Then n lines contain three integers each, each integer is either 0 or 1. 
// If the first number in the line equals 1, then Petya is sure about the problem's solution, otherwise he isn't sure.
// The second number shows Vasya's view on the solution, the third number shows Tonya's view.
//  The numbers on the lines are separated by spaces.

// Output
// Print a single integer — the number of problems the friends will implement on the contest.

int main ()
{

    int problems, willdo, petya, vasya, tonya;
    
  
    willdo = 0;
    problems = 0;



    scanf ("%d", &problems);

    for (int i = 0; i < problems; i++ ) {

        
        scanf ("%d", &petya);

        scanf ("%d", &vasya);

        scanf  ("%d", &tonya);
    
        if ((petya + vasya+ tonya) >= 2 ) {
            willdo++;

        }

        

    }
         printf ("%d", willdo);
}
   