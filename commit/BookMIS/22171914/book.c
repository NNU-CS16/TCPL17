#include "zcz.h"
int main ()
{
    int i;
    struct book *head;
    struct book* p;
    p = &head;
    FILE* fp;
    if ((fp = fopen ("file.csv", "w")) == NULL)
    {
        printf ("无法打开文件\n");
        exit (1);
    } 
    for (i = 0; i < 15; i++)
    {
        p = (struct book*)malloc(sizeof(struct book));        
        scanf ("%s %s %s %lf",p -> name, p -> writer, &p -> ISBN, &p -> price);
        fprintf (fp,"\t\t%s\t\t\t%s\t\t\t%s\t\t\t%lf\n", p -> name, p -> writer, p -> ISBN, p -> price);
        p -> next = NULL;
        p = p -> next;
    }
    fclose (fp);
    return 0;
} 
