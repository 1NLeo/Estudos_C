/*
Create an array of 3 books (`book_data livros[3]`). Populate the data for each one (title, author, year) 
using a pointer that traverses the array—that is, a `book_data *ptr` that you advance 
(using `ptr++` or `ptr + i`) instead of using `livros[i]` directly. Finally, print the data for the 3 books.
*/
#include <stdio.h>
#include <string.h>
#define size 1

struct book_data {

    char title[50];
    char author[50];
    int publish_yr;
};

typedef struct book_data book_data;

    void update_year (book_data *b) {
        
    printf ("Enter the new publish data: ");
    scanf ("%d", &b -> publish_yr);
    }


int main () {

    book_data book[size];
    book_data *ptr = book;
    book_data *new_year = book;

    for (int i = 0; i < size; i++) { // I changed the size to 1 so it would be easier to test.
        printf ("Book informations\n");
        printf ("Enter the title: ");
        fgets (ptr[i].title, 49, stdin);
        ptr[i].title[strcspn(ptr[i].title, "\n")] = '\0';

        printf ("Enter the name of the author: ");
        fgets ((ptr + i) -> author, 49, stdin);
        ptr[i].author[strcspn(ptr[i].author, "\n")] = '\0';

        printf ("Enter the publish year: ");
        scanf ("%d", &(ptr + i)->publish_yr);
        getchar();// Clean up the buffer (Prevent the fgets to bug)
    
    }

    for (int i = 0; i < size; i++) {
        printf ("\n");
        printf ("Before the Pointer: \n");
        printf ("Book %d: \n", i + 1);
        printf ("Title of the book: %s \n", book[i].title);
        printf ("Name of the author: %s \n", book[i].author);
        printf ("Publish year: %d \n", book[i].publish_yr);
        printf ("\n");
    }

    update_year (new_year); // Void func to update the year.

    for (int i = 0; i < size; i++) {
        printf ("\n");
        printf ("After the Pointer: \n");
        printf ("Book %d: \n", i + 1);
        printf ("Title of the book: %s \n", book[i].title);
        printf ("Name of the author: %s \n", book[i].author);
        printf ("Publish year: %d \n", book[i].publish_yr);
    }

    

    return 0;
}