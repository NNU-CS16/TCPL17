#ifndef HEAD_H
#define HEAD_H
struct book
{
    char name[50];  char author[20];
    char ISBN[8];  double price;
    int num;
    struct book *next;
};
struct book *search(struct book *head);
struct book *add(struct book *head); 
struct book *change(struct book *head);
struct book *delete(struct book *head);
struct book *account(struct book *head);
void display(struct book *head);  
void file(struct book *head);
#endif
