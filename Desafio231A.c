#include <stdio.h>


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
   