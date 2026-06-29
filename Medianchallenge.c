// Digitar um valor que é a quantidade de numeros que o usuario vai digitar.
// A segunda linha de entrada uma sequencia de numeros em ordem crescente .
// armazenar no vetor e pegar a mediana.

    #include <stdio.h>

    int main () {

        int quant = 0, n = 0, div;
        float med;

        printf ("Enter the quantity of numbers you will type: ");
        scanf ("%d", &quant);
        int vet[quant];

        for (int i = 0; i < quant; i++) {

            printf ("Enter each number in ascending order: ");
            scanf ("%d", &n);

            vet[i] = n;

        }

            div = quant / 2;

            if (quant % 2 != 0) {

                printf ("%d", vet[div]);
            }

            
            else if ( quant % 2 == 0) {

                med = (vet[div] + vet[div - 1 ]) / 2.0 ;

                printf ("%.1f", med);
            }

        return 0;
    }


    