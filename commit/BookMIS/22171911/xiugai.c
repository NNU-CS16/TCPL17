#include "head.c"
void xiugai( )
{
    books *head;
    char word[50];
    char zuozhe[20];
    char ISBN[8];
    int a, n = 0;
    books* p = (books*)malloc(sizeof(books));
    p = head;
    printf ("1.书名\n");
    printf ("2.作者\n");
    printf ("3.ISBN\n");
    scanf ("%d", &a);
    switch(a)
    {
        case 1:
            printf ("请输入书名");
            gets(word);
            char *b;
            while (p != NULL)
            {
                b = strstr(p -> name, word);
                if (b != NULL)
                {
                    printf ("%s%s%s%lf", p -> name, p -> writer, p -> ISBN, p -> price);
                    n = 1;
                    break;
                }
                else
                    p = p -> next;
            }
            if (n == 1)
            {
                printf ("修改的书名,作者,价格:");
                scanf ("%s%s%lf", p -> name, p -> writer, &p -> price);
            }
        case 2:
            printf ("请输入作者");
            gets(zuozhe);
            while (p != NULL)
            {
                if (strcmp(p -> writer, zuozhe) == 0)
                {
                    printf ("%s%s%s%lf", p -> name, p -> writer, p -> ISBN, p -> price);
                    n = 1;
                    break;
                }
                else
                    p = p -> next;
            }
            if (n == 1)
            {
                printf ("修改的书名,作者,价格:");
                scanf ("%s%s%lf", p -> name, p -> writer, &p -> price);
            }
         case 3:
            printf ("请输入ISBN");
            gets(ISBN);
            while (p != NULL)
            {
                if (strcmp(p -> ISBN, ISBN) == 0)
                {
                    printf ("%s%s%s%lf", p -> name, p -> writer, p -> ISBN, p -> price);
                    n = 1;
                    break;
                }
                else
                    p = p -> next;
            }
            if (n == 1)
            {
                printf ("修改的书名,作者,价格:");
                scanf ("%s%s%lf", p -> name, p -> writer, &p -> price);
            }

        default:
            printf ("错误");
    }
}


            
            
 

