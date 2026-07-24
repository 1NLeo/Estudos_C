#include <stdio.h>

void fib (float first_num ,float second_num) {

    float last_num = 0;

    for (int i = 0; i < 100; i++) {

        last_num = first_num + second_num;
        printf ("%.1lf \n", last_num);

        first_num = second_num;
        second_num = last_num;
    }
}

int main () {

    fib(0,1);

    return 0;
}