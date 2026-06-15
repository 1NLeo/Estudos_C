    #include <stdio.h>

    int main () {

    int cost = 0, dol = 0, ban = 0, total = 0, borrow = 0;

    scanf ("%d", &cost);

    scanf ("%d", &dol);

    scanf ("%d", &ban);
    ban++; // Ban++ so when "i" = 1 i dont lose one banana

        for (int i = 1; i < ban; i++) {

           total += cost * i;
         
        }

        borrow = total - dol;

        printf ("%d", borrow);

        

        return 0;
    }