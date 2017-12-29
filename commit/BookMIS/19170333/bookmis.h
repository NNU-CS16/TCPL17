#ifndef BOOKMIS_h_ 
#define BOOKMIS_h_
#define STAR "******************"
#define MIS "___________________________"
#define M 10
typedef struct Node{
    char bookname[50];
	char author[20];
	char ISBN[8];
	double price;
    struct Node* next;
}NODE;

typedef struct book{
	int bw;
	char zuozhe[20];
}shu;

void student (void);

void manger (void);

int status (void);

int menu1 (void);

void Query (void);

int query_menu (void);

void Append (void);

void Revise (void);

int revise_menu (void);

void Delete (void);

void Indicition (void);

void Statistics (void);

#endif
