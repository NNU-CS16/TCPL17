#include"head.h"
int main ()
{
    int i;
    book head;
    book* p;
    p = &head;
    FILE* fp;
    if ((fp = fopen ("book.csv", "w")) == NULL)
    {
        printf("\t\t无法打开文件\n");
        exit (1);
    } 
    for (i = 0; i < 15; i++)
    {
        p = (book*)malloc(sizeof(book));        
        scanf ("%s %s %s %lf",p -> book_name, p -> author, p -> ISBN, &p -> price);
        fprintf (fp,"\t\t%s\t\t\t%s\t\t\t%s\t\t\t%lf\n", p -> book_name, p -> author, p -> ISBN, p -> price);
        p -> next = NULL;
        p = p -> next;
    }
    fclose (fp);
    return 0;
 }

