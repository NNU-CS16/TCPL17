#ifndef CHAIN
#define CHAIN
#include"fcount.h"
typedef struct Book
{
	char bookname[50];
	char author[20];
	char ISBN[8];
	double price;
	struct Book *next;
}book;

book *release(book* head);
writer *Release(writer *head);
book *insertbeforehead(book *newp,book *head);
book *insert(book *newp,book *head);
book *Backspace(book *newp,book *head);
void print(book *head);


#endif
