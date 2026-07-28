   #include <stdio.h>

typedef struct complex {

    double real;
    double imaginary;

}complex;


int main () {

    complex number[3];

   complex c1 = {.real = 28.24, .imaginary = 40};
   complex c2 = {.real = 36.3, .imaginary = 19.1};
   complex subtract;

   subtract.real = c1.real - c2.real;
   subtract.imaginary = c1.imaginary - c2.imaginary;

    printf ("Sum between complex numbers = %.2lf + %.2lfi", subtract.real, subtract.imaginary);


}