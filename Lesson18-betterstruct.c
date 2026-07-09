#include <stdio.h>
#include <string.h>

#define size 3

struct type_person{

    int age;
    float weight;
    char name[50];

};

typedef struct type_person type_person;

int main  (){

    type_person person[size];
    
    for (int i = 0; i < size; i++){

        printf ("Enter your name: ");
        fgets(person[i].name, 49, stdin); // this different scanf is used to read spaces
        person[i].name[strcspn(person[i].name, "\n")] = '\0'; // overwrites the \n with the `\0` "null"

        printf("Enter your age: ");
        scanf ("%d", &person[i].age);

        printf("Enter your weight: ");
        scanf("%f", &person[i].weight);
        while (getchar() != '\n'); // reads character one by one until finds the \n so it doesnt brake the program
    }

        for (int i = 0; i < size; i++){
           
            printf ("\n");
            printf ("Name: %s\t", person[i].name);
            printf ("Age: %d\t", person[i].age);
            printf ("weight: %.2f\t", person[i].weight);
            
        }
        
    
    return 0;
}