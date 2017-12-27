#ifndef CMD_H
#define CMD_H
struct Node
{
	char name[50];
	char author[20];
	char ISBN[8];
	double price;
	struct Node *next;
};
typedef struct Node Book; 
Book *insert(Book *head);
Book *save(Book *head);
Book *loadbook();
Book *search(Book *head);
void output(Book *head);
Book *update(Book *head);
Book *delete(Book *head);
void tongji(Book *head);
#endif

