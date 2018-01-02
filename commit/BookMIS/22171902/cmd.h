#ifndef _B

#define _B



struct Book

{

	char title[50];

	char author[20];

	char ISBN[8];

	double price;

	struct Book* next;

};



typedef struct Book book;



void BookPuts(book*);



book* Load();



void Searchtitle(book*);



void Searchauthor(book*);



book* SearchISBN(book* ,char*);



book* Update(book*);



book* Add(book*);



book* Delete(book*);



void List(book*);



void Report(book*);



int Save(book*);



#endif
