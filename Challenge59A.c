#include <stdio.h>
#include <ctype.h>
/*
Challenge Summary
We need to convert a given string to either all lowercase or all uppercase. We count the number of lowercase and uppercase letters. If the word has strictly more uppercase letters, convert the entire word to uppercase. Otherwise (if there are more lowercase letters or an equal amount of both), convert the entire word to lowercase.

Input
Line 1: A string s (1 <= length of s <= 100) containing both uppercase and lowercase Latin letters.

Output
Print the modified string s according to the rules.
*/

// Need to learn more to complete this challenge. Still to hard for me 6/22/2026
// complete 08/07/2026, now this is incredibly easy to me 

int main () {

 char string[100];
 int lower = 0, upper = 0, count = 0;

    scanf ("%s", &string);
    
    while (string[count] != '\0'){

        if (isupper(string[count])) {
            upper++;
        }

        else if (islower(string[count])) {
            lower++;
        }

    count++;
    }

    if (lower > upper) {
         for (int i = 0; string[i] != '\0'; i++) {
            string[i] = tolower(string[i]);
        }
          printf ("%s", string);
    }

    else if (lower == upper) {
        for (int i = 0; string[i] != '\0'; i++) {
            string[i] = tolower(string[i]);
        }
        printf ("%s", string);
    }

    else {
        for (int i = 0; string[i] != '\0'; i++) {
            string[i] = toupper (string[i]);
        }
         printf ("%s", string);
    }

   

    


 return 0;

}