/*
Create an array of 3 books (`book_data livros[3]`). Populate the data for each one (title, author, year) 
using a pointer that traverses the array—that is, a `book_data *ptr` that you advance 
(using `ptr++` or `ptr + i`) instead of using `livros[i]` directly. Finally, print the data for the 3 books.
*/
#include <stdio.h>
#include <string.h>
#define size 3

struct book_data {

    char title[50];
    char author[50];
    int publish_yr;
};

typedef struct book_data book_data;

int main () {

    book_data book[size];
    book_data *ptr = book;

    for (int i = 0; i < size; i++) {
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
        printf ("Book %d: \n", i + 1);
        printf ("Title of the book: %s \n", book[i].title);
        printf ("Name of the author: %s \n", book[i].author);
        printf ("Publish year: %d \n", book[i].publish_yr);
    }

    return 0;
}