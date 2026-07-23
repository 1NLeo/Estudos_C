#include <stdio.h>
// To do when i get better, still hard for me 22/07/2026

int fib(int n){
   int f = 0;

    if (n > 1){
    f = (n - 1) + (n - 2);
    printf ("%d", f);
   }
    
    else {
        f = 0;  
        printf ("%d", f);
    }
}

int main () {
    int num = 0;
    scanf ("%d", &num);

    int result = fib(num);

    return 0;
}