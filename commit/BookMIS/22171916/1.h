#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
struct book
 {
    char name[50];
    char writer[20];
    char ISBN[20];
    double price;
    struct book* next;
};

