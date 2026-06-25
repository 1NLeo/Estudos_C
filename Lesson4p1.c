#include <stdio.h>

int main (){

    float m = 0.0;

    printf ("Enter your grade: ");
    scanf ("%f", &m);

    if (m >= 4.0 && m < 7.0){ 
        printf ("You can make the exam.");
    }

    return 0;
}