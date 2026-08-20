#include <stdio.h>

void read_numbers(int* size, int array[]) {
    printf ("Quantity of numbers: ");
    scanf ("%d", size);

    for (int i = 0; i < *size; i++) {
        printf ("Enter the numbers: ");
        scanf ("%d", &array[i]);
    }
}

void show_numbers(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf ("number: %d \n", array[i]);
    }
}

int find_greater(int array[], int size) {
    int greater = array[0];  // começa com o primeiro elemento do array

    for (int i = 1; i < size; i++) {
        if (array[i] > greater) {
            greater = array[i];
        }
    }

    return greater;  // devolve o valor encontrado pra quem chamou
}

int find_smallest (int array[], int size) {
    int smallest = 32767;

    for (int i = 0; i < size; i++) {
        if (smallest > array[i]) {
            smallest = array[i];
        }
    }

    return smallest;
}

int find_sum (int array[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    return sum;
}

void find_average (int array[], int size) {
    float average = 0;

    for (int i = 0; i < size; i++) {
        average += array[i];
    }
    average = average / size;

    printf ("%.2f\n", average);
}

void find_number (int vetor[], int size, int number) {

    printf ("Enter one number to find: ");
    scanf ("%d", &number);

    for (int i = 0; i < size; i++) {
        if (number == vetor[i]) {
            printf ("This number exists in the array.\n");
            break;
        }
        else if ( i == size && number != vetor[size]) {
            printf("This number does not exists in the array.\n");
        }
    }
}

int main () {

    int size;
    int array[100];
    int num = 0;
    int average;

    read_numbers (&size, array); // void

    show_numbers (array, size); // void

    int greater = find_greater (array, size); // func
    printf ("Greater number: %d \n", greater);

    int smallest = find_smallest (array, size); // func
    printf ("Smallest number: %d \n", smallest);

    int sum = find_sum (array, size); // func
    printf ("Sum: %d\n", sum);

    find_average (array, size); // void

    find_number (array, size, num); // void

    // A few changes in the code just to test the "git switch -c "
    // The commits dont go to the main, very useful
    return 0;
}