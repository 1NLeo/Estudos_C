#include <stdio.h>

void fib (float first_num ,float second_num) {

    float last_num = 0;

    for (int i = 0; i < 10; i++) {

        last_num = first_num + second_num;
        if (i < 1){
            printf ("%d\t", 0);
            printf ("%d\t", 1);
        }
        printf ("%.0lf \t", last_num);



        first_num = second_num;
        second_num = last_num;
    }
}

int main () {

    fib(0,1);

    return 0;
}