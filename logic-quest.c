#include <stdio.h>

int main () {                                   
                                                    
    int x = 0;

    if (x != 0 && 10/x > 2) {               // if (10/x > 2 && x != 0)  
        printf ("A\n");                     // At this case the code doesnt even compile
    } else {
        printf ("B\n");
    }

    return 0;
}