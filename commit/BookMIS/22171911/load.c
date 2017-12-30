#include "head.c"
void load( )
{
    books* head = (books*)malloc(sizeof(books));
    books *q, *p;
    FILE *fp;
    fp = fopen("books.txt","r");
    if ((fp == NULL))
    {
      printf ("无法打开文件");
      exit(1);
    }
    head -> next = NULL;
    q = head;
    while (fgetc(fp)!= EOF)
    {
        p = (books*)malloc(sizeof(books));
        fscanf (fp,"%s%s%s%lf", q -> name, q -> writer, q -> ISBN, &q -> price);
        
        p -> next = NULL;
        q -> next = p;
        q = p;
    }
    fclose(fp);
    return head;
}
    
