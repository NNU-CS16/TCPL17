#ifndef HEAD_H_
#define HEAD_H_
struct Node
{
    char name[50];
    char writer[20];
    char ISBN[8];
    double price;
    struct Node* next;
};
typedef struct Node Book;
Book *Loading(Book *head);
Book *Changebook(Book *head);
Book *Searchbook(Book *head);
Book *Addbook(Book *head);
Book *Deletebook(Book *head);
Book *Showbook(Book *head);
Book *Countbook(Book *head);
#endif

