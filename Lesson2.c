// Variable   declaration 

#include <stdio.h>

#define text "Hello World!"

int main () {

    int age = 0;
    float height = 0.0;
    char name[50] = "";

        printf ("Type your age: ");
        scanf ("%d", &age);

        printf ("Type your height: ");
        scanf ("%f", &height);

        printf ("Type your name: ");
        scanf ("%s", &name);

            printf ("Given datas: \n");

            printf ("Age: %d\n", age);

            printf ("height: %.2f\n", height);

            printf ("Name: %s", name);
            

    return 0;
}

 

