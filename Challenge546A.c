    #include <stdio.h>

    int main () {

    int cost = 0, dol = 0, ban = 0;

    scanf ("%d", &ban);
    int vet[ban];

    scanf ("%d", &dol);

    scanf ("%d", &cost);
    


        for (int i = 1; i < ban; i++) {

            vet[i] = cost * i;
            
            printf ("%d", vet);

        }

        

    }