#ifndef ALG_H
#define ALG_H
struct bookNode
{
    char book_name[50];
    char writer[20];
    int ISBN;
    double price;
    struct bookNode* next;
}; 
struct bookNode *add(struct bookNode *); 

struct bookNode *update(struct bookNode *);

struct bookNode *delete(struct bookNode *);

void bookList(struct bookNode *);

void search(struct bookNode *);

struct bookNode *load();

struct bookNode *save(struct bookNode *);

void bookReport(struct bookNode *);

#endif
