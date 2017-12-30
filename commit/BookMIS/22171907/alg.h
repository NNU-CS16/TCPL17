#ifndef _A
#define _A

struct Book
{
    char nam[50];
    char aut[20];
    char isbn[8];
    double pri;
    struct Book* next;
};
typedef struct Book book;


void bputs(book*);

book* load();

void searchnam(book*);

void searchaut(book*);

book* searchisbn(book*, char*);

book* update(book*);

book* insert(book*);

book* delete(book*);

void list(book*);

void report(book*);

int save(book*);

#endif
