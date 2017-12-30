#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
struct book
{
  char name[20];
  char writer[10];
  char ISBN[8];
  double price;
  struct book* next;
};

