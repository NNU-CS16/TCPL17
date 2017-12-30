#ifndef _A_H
#define	_A_H

struct Book
{
    char Bname[50];
    char Wname[20];
    char ISBN[8];
    double Bprice;
    struct Book *next;
};
struct Book *creat();
void search(struct Book *head);
struct Book *Delete(struct Book *head);
struct Book *insert(struct Book *head);
struct Book *modification(struct Book *head);
void output(struct Book *head);
void analyse(struct Book *head);
void baocun(struct Book *head);

#endif
