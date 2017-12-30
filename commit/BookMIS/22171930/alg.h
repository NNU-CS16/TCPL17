#ifndef _ALG_H
#define _Alg_H
struct Book
{
	char Bname[50];
    char Wname[20];
	char ISBN[8];
	double Bprice;
    struct Book *next;
};
struct Book *creat();
void search(struct Book *head,int choi);
struct Book *delete(struct Book *head,char Bname[50],char Wname[20],char ISBN[8],double Bprice);
struct Book *insert(struct Book *head,struct Book *newp);
void change(struct Book *head,int choe,char ISBN[8]);
void report(struct Book *head); 
#endif
