#include <stdio.h>

struct complex {

    double real;
    double imaginary;

};

    typedef struct complex complex;

int main () {

    complex number[3];

    double subr = 0.0;
    double subi = 0.0;

    for (int i = 0; i < 2; i++) {
        printf ("Enter the real number: ", i);
        scanf ("%lf", &number[i].real);

        printf ("Enter the imaginary number: ", i);
        scanf ("%lf", &number[i].imaginary);
    }

   subr = number[0].real - number[1].real;
   subi = number[0].imaginary - number[1].imaginary;

    printf ("Sum between complex numbers = %.2lf + %.2lfi", subr, subi);


}