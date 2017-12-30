#ifndef FCOUNT
#define FCOUNT
typedef struct Writer
{
char name[20];
int num;
struct Writer *next;
}writer;

void countbook();
void countauthor();


#endif

