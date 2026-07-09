#include <stdio.h>
#include <string.h>

#define num_students 5
/*
  Student record — struct Student 
  char name[50]; int age; float grade;
  Create an array of 5 students, fill it via input, then print the one with the highest grade.
*/
struct students {

    char name[50];
    int age;
    float grade;


};

typedef struct students students;

int main () {

    students student[num_students];

    float best_grade = 0.0;
    char best_student[50];

    for (int i = 0; i < num_students; i++){

        printf ("Student name: ");
        fgets (student[i].name, 50, stdin);
        student[i].name[strcspn(student[i].name, "\n")] = '\0';

        printf ("Student age: ");
        scanf ("%d", &student[i].age);

        printf ("Student grade: ");
        scanf ("%f", &student[i].grade);
        while (getchar() != '\n');

        if (best_grade < student[i].grade){
            best_grade = student[i].grade;
            strcpy (best_student, student[i].name );
        }
    }

    printf ("%s has the best grade of the test with %.2f points", best_student, best_grade);





    return 0;
}