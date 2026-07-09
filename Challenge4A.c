#include <stdio.h>

//Challenge Summary
//We need to determine if a watermelon of a given weight can be divided into two separate parts such that both parts have an even,
//strictly positive weight. The two parts do not need to be equal in size.

//Input
//The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.

//Output
//Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; 
//and NO in the opposite case.

int main()
{
   int a;
   
   scanf ("%d", &a);
   
   if (a % 2 == 0) {
       printf ("YES");
   }
   
   else {
   printf ("NO");
   }
    

   
    return 0;
}