#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
struct books
{
    char name[50];
    char writer[20];
    char ISBN[8];
    double price;
    struct books* next;
};
typedef struct books books;
void load( );
void chaxun( );    
void tianjia( );
void xiugai( );
void shanchu( );
void xianshi( );
void tongji( );
