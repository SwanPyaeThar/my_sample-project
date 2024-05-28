//
// Created by swan on 5/27/24.
//
#include <stdio.h>
#include <string.h>
#include "stdlib.h"

#define MAX_BOOKS 100

struct Book{
    int id;
    char title[100];
    char author[100];
    int available;
};
struct Book library[MAX_BOOKS];
int count = 0;

void addBook() {
    if (count < MAX_BOOKS) {
        struct Book newBook;
        newBook.id = count+1;
        printf("Enter title:  ");
        scanf(" %[^\n]%*c",newBook.title);
        printf("Enter author:  ");
        scanf(" %[^\n]%*c",newBook.author);
        newBook.available = 1;
        library[count] = newBook;
        count++;
        printf("Book added successfully!\n");
    } else {
        printf("Library is full!\n");
    }
}

void searchBook(){
    char title[100];
    printf("Enter title to search:  ");
    scanf(" %[^\n]%*c",title);

    for(int i = 0; i < count; i++){
        if (strcmp(library[i].title,title) == 0){
            printf("Book ID: %d\n",library[i].id);
            printf("Title: %s\n",library[i].title);
            printf("Author: %s\n",library[i].author);
            printf("Available: %s\n",library[i].available? "Yes":"No");
            return;
        }

    }
    printf("Book not found.\n");
}

void borrowBook(){
    int id;
    printf("Enter book ID to borrow:  ");
    scanf("%d",&id);

    if (id > 0 && id <= count && library[id-1].available) {
        library[id-1].available = 0;
        printf("Book borrowed successfully!\n");
    } else{
        printf("Book not available or Invalid ID.\n");
    }
}

void returnBook(){
    int id;
    printf("Enter book ID for return:  ");
    scanf("%d",&id);

    if (id > 0 && id <= count && !library[id-1].available) {
        library[id-1].available = 1;
        printf("Book returned successfully!\n");
    } else {
        printf("Invalid book ID.\n");
    }
}


int main(){
    int choice;
    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Borrow Book\n");
        printf("4. Return Book\n");
        printf("5. Exist\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                searchBook();
                break;
            case 3:
                borrowBook();
                break;
            case 4:
                returnBook();
                break;
            case 5:
                exit(1);
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}