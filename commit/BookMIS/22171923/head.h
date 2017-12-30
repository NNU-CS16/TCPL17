#ifndef HEAD_H
#define HEAD_H
struct book
{
    char name[50];
    char author[20];
    char ISBN[8];
    double price;
    int num;
    struct book *next;
};
struct book *add(struct book *head);
void save(struct book *head);
struct book *loadBook();
struct book *search(struct book *head);
struct book *revise(struct book *head);
void output(struct book *head);
void InfoSta(struct book *head);
struct book *delete(struct book *head);
#endif
