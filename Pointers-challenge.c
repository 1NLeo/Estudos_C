#include <stdio.h>

int main () {

    double salary;
    double* ptr;

    printf ("Enter your salary: ");
    scanf ("%lf", &salary);

     ptr = &salary; 

    *ptr = 5000;

    printf ("%.2lf \n", *ptr);
    printf ("%.2lf", salary);

    return 0;
}