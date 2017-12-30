#include <string.h>
#include <stdlib.h>
#include <math.h>
#define yes 1
#define no 0
typedef struct book
{
    char name[50];
    char writer[20];
    int ISBN;
    double price;
    struct book* next;
}book; 
void inquiry ();
void add ();
void change ();
void Delete ();
void display();
void count ();
book* read ();
