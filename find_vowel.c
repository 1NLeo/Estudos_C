#include <stdio.h>
#include <string.h>

int main () {

    char vowel[5] = {'a', 'e','i','o','u'};
    char str[50];
    int length = 0;
    int vowel_quantity = 0;

    printf ("Write a phrase: ");
    fgets (str, 49, stdin);

    length = strlen (str) - 1;

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < 5; j++) {
            if (str[i] == vowel[j]) {
                vowel_quantity++;
            }
        }
    }

    printf ("%d", vowel_quantity);

    return 0;
}