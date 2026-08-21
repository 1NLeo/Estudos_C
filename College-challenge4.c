#include <stdio.h>

int main  () {

    int idade = 0;
    int opt = 0;
    int cnh = 0;

        printf ("Digite sua idade: ");
        scanf ("%d", &idade);
        
    do {

        printf ("Possui CNH: [1] SIM");
        printf ("            [2] NAO: ");
        scanf ("%d", &cnh);

    } while (cnh != 2 && cnh != 1);
 
        if (idade >= 18 && cnh == 1) {

            if (cnh == 1) {

                printf ("Voce possui alguma infracao de grave: [1] SIM");
                printf ("                                      [2] NAO");
                scanf ("%d", &opt);

                if (opt == 1) {
                    printf ("Voce pode dirigir");
                }

                else {
                    printf ("Voce nao pode dirigir");
                }
            }
        }

        else {
            printf ("Voce nao pode dirigir o veiculo da empresa.");
        }

    return 0;
}