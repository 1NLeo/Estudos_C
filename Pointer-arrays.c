#include <stdio.h>
/*


int main () {

    int numbers[5] = {1, 3, 5, 7, 9};
    
    for (int i = 0; i < 5; i++) { 
        printf("%d = %p\n", *(numbers + i), numbers + i);
    }                     //the pointer gives the value present in number + 1

    return 0;
}
*/

//Second Example: 

int main () {

    int numbers[5] = {1, 3, 5, 7, 9};

    *numbers = 2;
    *(numbers + 4) = 11;

    printf("First Element: %d\n", *numbers);
    printf("Last Element: %d", *(numbers+4));


    return 0;
}
