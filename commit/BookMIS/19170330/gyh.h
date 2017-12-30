#ifndef _GYH_H
#define _GYH_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
	char book_name[50];
	char author[20];
	char ISBN[8];
	double price;
	struct book *book_next;
};

struct book *Search_Book_ISBN(char, struct);
struct book *Search_Book_name(char, struct);
struct book *Search_Author_name(char, struct);
struct book *Insert_Book(struct, struct);
struct book *Change_Book(struct, char);
struct book *Delete_Book(struct, char);
void Print_Book(struct);
int Report_Book(struct, int);

#endif

