#include <stdio.h>

void findvalue (int* num) {
    *num = 39;
}

int main () {

    int number = 21;

    findvalue (&number);

    printf("%d", number);
}