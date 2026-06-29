#include <stdio.h>
#include <string.h>

int main() {
    int class, count;
    float grade, best_grade;
    
    char student[50];
    char best_student[50];

    printf("-------------------\n");
    printf(" Leo´s school \n");
    printf("-------------------\n");

    printf("Quantity of students in the classroom: ");
    scanf("%d", &class);

    count = 0;
    best_grade = 0.0; 

    while (count < class) {
        count++;
        printf("Student %d: ", count);
        
        printf("Student name: ");
        scanf ("%s", &student);

        printf("Student grade: ");
        scanf("%f", &grade);

        if (grade > best_grade) {
            best_grade = grade;
            strcpy(best_student, student);
        }
    }

    printf( "%s was the best student and its grade was: %.2f\n", best_student, best_grade );

    return 0;

}
