/*
Two-gram is an ordered pair (i.e. string of length two) of capital Latin letters. 
For example, "AZ", "AA", "ZA" — three distinct two-grams.

You are given a string s
 consisting of n
 capital Latin letters. Your task is to find any two-gram contained
  in the given string as a substring (i.e. two consecutive characters of the string) 
  maximal number of times. For example, for string s
 = "BBAABBBA" the answer is two-gram "BB", which contained in s
 three times. In other words, find any most frequent two-gram.

Note that occurrences of the two-gram can overlap with each other.

Input
The first line of the input contains integer number n
 (2≤n≤100
) — the length of string s
. The second line of the input contains the string s
 consisting of n
 capital Latin letters.

Output
Print the only line containing exactly two capital Latin letters — any two-gram contained in the given string s
 as a substring (i.e. two consecutive characters of the string) maximal number of times.
*/
#include <stdio.h>
#include <string.h>

int main () {

    int n = 0;
    int letter1 = 0;
    int letter2 = 0;
    int letter3 = 0;
    char letters[n];
    char string[n];
    char *repeated[n];
    repeated[n] = &string[n];

    scanf ("%d", &n);

    scanf ("%s", string);

   
    for (int i = 0; i < n + 1; i++) {
        int res = strcmp(string[i], repeated[i]);

        for (int j = 0; j < n + 1; j++) {

            if (res == 0) {
                
                
            }
        }
    }

    

    return 0;
}