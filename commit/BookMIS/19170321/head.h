	#ifndef HEAD_H
	#define HEAD_H
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	struct book
	{
		char name[50];
        char writer[20];
        char IBSN[8];
        double price;
        struct book *next;
    };
    typedef struct book Book;
    Book* LoadChain (Book *head, char *fileName);
    void SaveAs (Book *head,char *fileName);
    void ShowBook(Book *head);
    void Search(Book* head);
    void Update(Book* head);
    void Statistics(Book* head);
    Book* Delete(Book* head);
    Book* Insert (Book *head);
    int Menu();
    #endif
