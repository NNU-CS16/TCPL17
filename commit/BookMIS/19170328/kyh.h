#ifndef __KYH_H__
#define __KYH_H__
//code by Yinhu Kang
//The .h of myself
//First time;the destination is to have a try
//This place holds the library function that need to be used in the book management system
struct book
{
    char bookname[50];
    char author[20];
    char ISBN[8];
    double price;
    int booknum;
    struct book *next;
};
struct book *addbook(struct book *head);
void display(struct book *head);
struct book *search(struct book *head);
struct book *loadbook();
struct book *modify(struct book *head);
void save(struct book *head);
struct book *deletebook(struct book*head);
void statistics(struct book *head);
#endif
