#ifndef HEAD_H_
#define HEAD_H_
struct book
{
    char name[50];
    char writer[20];
    char ISBN[8];
    double price;
    struct book* next;
};
typedef struct Node Book;
Book *Loading();
Book *Changebook(Book *head);
void Searchbook(struct book *head);
struct Book *Addbook(struct Book *head);
Book *Deletebook(Book *head);
Book *Showbook(Book *head);
Book *Countbook(Book *head);
#endif

