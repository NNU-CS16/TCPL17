 #include"hehe.h"
 int main ()
 {
    int i;
    book head;
    book* p;
    p = &head;
    FILE* fp;
    if ((fp = fopen ("book.csv", "w")) == NULL)
    {
        printf ("无法打开文件\n");
        exit (1);
    } 
    for (i = 0; i < 15; i++)
    {
        p = (book*)malloc(sizeof(book));        
        scanf ("%s %s %d %lf",p -> name, p -> writer, &p -> ISBN, &p -> price);
        fprintf (fp,"\t\t%s\t\t\t%s\t\t\t%d\t\t\t%lf\n", p -> name, p -> writer, p -> ISBN, p -> price);
        p -> next = NULL;
        p = p -> next;
    }
    fclose (fp);
    return 0;
 }  // 写入图书信息到csv文件
