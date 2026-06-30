// Variable   declaration 

#include <stdio.h>

#define text "Hello World!"

int main () {

    int age = 0;
    float height = 0.0;
    char name[50] = "";

        printf ("Enter your age: ");
        scanf ("%d", &age);

        printf ("Enter your height: ");
        scanf ("%f", &height);

        printf ("Enter your name: ");
        scanf ("%s", &name);

            printf ("Given datas: \n");

            printf ("Age: %d\n", age);

            printf ("height: %.2f\n", height);

            printf ("Name: %s", name);
            

    return 0;
}

 

