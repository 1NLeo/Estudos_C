#include <stdio.h>

int main (){

    float grade = 0.0;

    printf ("Enter your grade: ");
    scanf ("%f", &grade);

    if (grade >= 7){
        printf ("Approved!");
    }

        else if (grade >= 4.0) { 
            printf ("You can make the exam again.");
        }
    
            else {
                printf ("Reproved :(");
            }


    return 0;
}