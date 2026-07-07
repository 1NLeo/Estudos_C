#include <stdio.h>
#include <string.h>

#define size 50

struct type_person{

    int age;
    float weight;
    char name[size];
};

typedef struct type_person type_person;

int main (){
    // creating and initializing
    type_person per = {0,0.0, "Test"};

    printf ("Start: \n");
    printf ("per.age: %d\n", per.age);
    printf ("per.weight: %f\n", per.weight);
    printf ("per.name: %s\n", per.name);
    printf ("\n");
    // Assigning values 

    per.age = 18;
    per.weight = 69.70;
    strcpy(per.name, "Leonardo");

    printf ("Changing the fields whith codes:\n");
    printf ("per.age: %d\n", per.age);
    printf ("per.weight: %2.f\n", per.weight);
    printf ("per.name: %s\n",per.name);
    printf ("\n");
    // Requesting insertions via keyboard

    printf ("Enter your age: ");
    scanf ("%d", &per.age);
    printf ("Enter your weight: ");
    scanf ("%f", &per.weight);
    printf ("Enter your name: ");
    scanf ("%s", per.name);

    // Modifying data whith users
    printf ("\n");
    printf ("per.age: %d\t", per.age);
    printf ("per.weight: %.2f\t", per.weight);
    printf ("per.name: %s\t", per.name);



    return 0;
}