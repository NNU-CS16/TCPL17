#ifndef HEAD_H_
#define HEAD_H_
struct book
{
  char name[51];
  char writer[21];
  char ISBN[8];
  double price;
};
struct Node
{
  struct book data;
  struct Node *next;
};
void search(struct Node *head);
int Delete(struct Node *head);
void insert(struct Node *head);
void report(struct Node *head);
void update(struct Node *head);
int loadarray(struct Node *head);
void output(struct Node *head);
#endif
