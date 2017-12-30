#include <stdio.h>
struct Book
{
	char title[50];
	char author[20];
	char ISBN[8];
	struct Book *next;
};
struct Bookchain
{
	struct Book *book;
	struct Bookchain *next;
};
struct Authorchain
{
	char authorname[20];
	struct Bookchain *hisbook;
	struct Authorchain *next;
};
struct Keywordbookchain
{
	struct Book *book;
	struct Keywordbookchain *next;
};
struct Keywordchain
{
	char keyword[50];
	struct Keywordbookchain *thisbook;
	struct Keywordchain *next;
};
int compare(const void *a, const void *b);
struct Book *defaultion(struct Book *bookhead, FILE *sourcefile, struct Authorchain *Authornamedic[][26], struct Keywordchain *Keyworddic[][27], struct Book *ISBN[] );
struct Book *reverse(struct Book *bookhead);
struct Keywordbookchain *search(char keyword[], struct Keywordchain *Keyworddic[][27]);
struct Keywordbookchain *makeintersection(struct Keywordbookchain *Achain, struct Keywordbookchain *Bchain, int i);
void addauthorchain(struct Authorchain *Authornamedic[][26], struct Book *book);
void addkeywordchain(struct Keywordchain *Keyworddic[][27], struct Book *book);
void addnewbook(FILE *sourcefile, struct Book *bookhead, struct Authorchain *Authornamedic[][26], struct Keywordchain *Keywordic[][27]);
void deletebook(struct Book *target);
void finishprogram(struct Authorchain *Authornamedic[][26], struct Keywordchain *Keyworddic[][27], struct Book *bookhead);
void searchbyauthorname(struct Authorchain *Authornamedic[][26]);
void searchbyisbn(struct Book *ISBN[]);
void searchbykeyword(struct Keywordchain *Keyworddic[][27]);
void clearKeywordchain(struct Keywordchain *target);
void clearAuthorchain(struct Authorchain *target);
void printallbook(struct Book *bookhead);
void printonebook(struct Book *bookhead);
void freechain(struct Book *bookhead);
