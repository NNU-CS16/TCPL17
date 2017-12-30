	#include <stdio.h>
	#include <math.h>
	struct book
	{
		char bookname[50];
		char bookauthor[20];
		char booknumber[8];
		double bookprice;
		struct book *next;
	};
	void search(struct book *head);
	struct book* add(struct book *p);
	struct book* deleted(struct book *p);
	struct book* update(struct book *p);
	void listall(struct book *p);
	void report(struct book *p);
	struct book* read();
	void keep(struct book *head);

