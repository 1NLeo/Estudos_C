#include <stdio.h>
#include <string.h>

//Challenge Summary
//We need to process a list of words and abbreviate any word that is strictly longer than 10 characters.
// The abbreviation format is: [First Letter] + [Number of skipped middle letters] + [Last Letter].
// Words that have 10 characters or fewer must remain completely unchanged.

//Input
//The first line contains an integer n (1 ≤ n ≤ 100). Each of the following n lines contains one word. 
//All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters.

//Output
//Print n lines. The i-th line should contain the result of replacing of the i-th word from the input data.

int main () {

    char word [100];
    int length = 0 ;
    int rep = 0;

    scanf ("%d", &rep);

    for (int i = 0; i < rep; i++ ) {

        scanf ("%s", &word);

        length = strlen (word);
        
        if (length > 10) {

            printf ("%c%d%c\n", word [0], length - 2, word [length - 1]  );
        }

        else {

            printf ("%s\n", word);
        }

        int length = 0;
        word [0] = '\0';
    
    }

    return 0;
}
