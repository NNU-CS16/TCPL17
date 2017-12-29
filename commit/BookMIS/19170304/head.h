#ifndef HEAD_H_

#define HEAD_H_

struct book

{

    char name[50];

    char ISBN[8];

    char author[50];

    double price;

    int num[10];

    struct book *next;

};

struct book *Search(struct book *head);

struct book *Delete(struct book *head);

struct book *Add(struct book *head);

struct book *Update(struct book *head);

struct book *InfoSta(struct book *head);

struct book *load();

struct book *save(struct book *head);

#endif
