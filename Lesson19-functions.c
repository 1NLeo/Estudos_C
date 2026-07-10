#include <stdio.h>

void greater(float num1, float num2) {

    if (num1 > num2){
        printf ("%.2f is greater than %.2f", num1, num2);
    }
    else if (num2 > num1){
        printf ("%.2f is greater than %.2f", num2, num1);
    }
    else {
        printf ("Both numbers are equal.");
    }

}

int main (){
    float x = 0.0, y = 0.0;

    printf ("Enter a number: ");
    scanf ("%f", &x);

    printf ("Enter another number: ");
    scanf ("%f", &y);

    greater (x, y);

    


    return 0;
}