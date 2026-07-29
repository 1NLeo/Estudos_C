/*
Declare a variable of this type (Pessoa p1), populate its fields, and create a pointer to it (Pessoa *ptr = &p1;).
Using the pointer and the arrow operator (->), change the `idade` (age) value,
and then print both fields of `p1` to confirm that the
change was made via the pointer.

Objective: to practice using `->` instead of `.` when accessing struct fields via a pointer.

*/
#include <stdio.h>
#include <string.h>
#define size 3

struct person_data {

    char name[50];
    int age;
};

typedef struct person_data person_data;

int main () {

    person_data person1;    
    person_data *ptr = &person1;

    ptr -> age = 18;
    strcpy (ptr->name, "Leonardo");

    printf ("Name: %s\n", person1.name);
    printf ("Age: %d", person1.age);

    return 0;
}