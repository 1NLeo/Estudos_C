#include <stdio.h>

int main () {

    float sal = 0, newsal = 0, inc = 0, per;

    printf ("Type the salary: ");
    scanf ("%f", &sal );

    printf ("Percentage increase: ");
    scanf ("%f", &per);

    inc = ((sal * per) / 100);
    
    newsal = (sal + inc);

    printf ("Increase value: %.0f\n", inc);
    printf ("New salary: %.0f", newsal);



    return 0;
}