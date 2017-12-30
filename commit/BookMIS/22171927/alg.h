#ifndef _ALG_H
#define _ALG_H
struct Node
{
    char name[50];
    char writer[20];
    char ISBN[8];
    double price;
    struct book *next;
};

struct Node *add(struct Node *); 

struct Node *update(struct Node *);

struct Node *delete(struct Node *);

void output(struct Node *);

void search(struct Node *);

struct Node *load();

struct Node *save(struct Node *);

void report(struct Node *);

#endif
