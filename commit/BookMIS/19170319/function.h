#ifndef FUNCTION_H_
#define FUNCTION_H_
struct book
{
    char bname[51];
    char aname[21];
    char isbn[9];
    double price;
    struct book *next;
};
struct book *link(struct book *head);
struct book *add(struct book *head);
struct book *amend(struct book *head);
void seek(struct book *head);
struct book *del(struct book *head);
void stat(struct book *head);
void check(struct book *head);
#endif
