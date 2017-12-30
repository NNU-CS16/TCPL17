
long int booknumber;
#include<stdio.h>
struct Book	{
		char title[50];
		char author[20];
		char ISBN[8];
		struct Book* next;
		};
struct Authorchain	{
			char authorname[20];
			struct Authorbookchain* hisbook;
			struct Authorchain* next;
			};
struct Authorbookchain	{
			struct Book* book;
			struct Authorbookchain* next;
			};
struct Keywordbookchain	{
			struct Book* book;
			struct Keywordbookchain* next;
			};
struct Keywordchain	{
			char keyword[50];
			struct Keywordbookchain* thisbook;
			struct Keywordchain* next;
			};
void addauthorchain(struct Authorchain* Authornamedic[][26],struct Book* book);
int compare(const void* a,const void* b);
void addnewbook(FILE* sourcefile,struct Book* bookhead,struct Authorchain* Authornamedic[][26],struct Keywordchain* Keywordic[][27]);
struct Book* defaultion(struct Book* bookhead,FILE* sourcefile,struct
