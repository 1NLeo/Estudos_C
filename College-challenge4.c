#include <stdio.h>

int main  () {

    int age = 0;
    int opt = 0;
    int drv_license = 0;

    printf ("Whats your age: ");
    scanf ("%d", &age);

        if (age < 18) {
        printf ("You cannot drive the company vehicle.");
        }

        else {
            do {

            printf ("Do you have a drivers license: [1] YES \n");
            printf ("                               [2] NO: ");
            scanf ("%d", &drv_license);

            } while (drv_license != 2 && drv_license != 1);

                if (drv_license == 1) {

                    printf ("Do you have any infraction:[1] YES\n");
                    printf ("                           [2] NO: ");
                    scanf ("%d", &opt);

                    if (opt == 2) {
                        printf ("You can drive the company vehicle");
                    }

                    else {
                        printf ("You cannot drive the company vehicle.");
                    }
                }

            else {
                printf ("You cannot drive the company vehicle.");
            }
        }

    return 0;
}