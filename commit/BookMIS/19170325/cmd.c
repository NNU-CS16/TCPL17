#include "cmd.h"

int Save(Book *Bookarr, int size, char *filename)
{
    FILE *fp;
    int i = 0;
    Book *p = Bookarr;

    fp = fopen(filename, "w");
    if (fp == NULL)
       return -1;
    for (i = 0; i < size; i++)
    {
        fprintf(fp, "%s\t%s\t%s\t%.2f\n", p->name, p->writer, p->ISBN, p->price);
        p++;
    }
    fclose(fp);

    return 0;
}

int Loadarr(Book *Bookarr, char *filename)
{
    Book *p = Bookarr;
    int size = 0;
    char line[100];
    FILE *fp;

    fp = fopen(filename, "r");
    if (fp == NULL)
        return -1;
    while (fgets(line, 100, fp) != NULL)
    {
        sscanf(line, "%s%s%s%f", p->name, p->writer, p->ISBN, &p->price);
        p++;
        size++;
    }
    fclose(fp);
    Bookarr = p;

    return size;
}

void Present(Book *Bookarr, int size)
{
    int i;

    printf("Name\tWriter\tISBN\tPrice\n");
    for (i = 0; i < size; i++)
    {
        printf("%s\t%s\t%s\t%.2f\n", Bookarr->name, Bookarr->writer,
                                   Bookarr->ISBN, Bookarr->price);
        Bookarr++;
    }
}

int Add(Book* Bookarr, int *psize)
{
    Book tmp;
    Book *r = NULL;

    do
    {
        printf("ISBN: \n");
        scanf("%s", tmp.ISBN);
        getchar();
        r = Search(Bookarr, *psize, tmp.ISBN);
        if (r != NULL)
            printf("Already exist !\n");
    }while (r != NULL);
    printf("Name: \n");
    scanf("%s", tmp.name);
    printf("Writer: \n");
    scanf("%s", tmp.writer);
    printf("Price: \n");
    scanf("%f", &tmp.price);
    getchar();
    Bookarr[*psize] = tmp;
    (*psize)++;

    return 0;
}

Book *Change(Book *Bookarr, int size, char *pISBN)
{
    Book *p;

    p = Search(Bookarr, size, pISBN);
    printf("The new information: \n");
    printf("Name: ");
    scanf("%s", p->name);
    getchar();
    printf("Writer: ");
    scanf("%s", p->writer);
    getchar();
    printf("Price: ");
    scanf("%f", &p->price);
    getchar();

    return 0;
}

int Delete(Book *Bookarr, int *psize, char *pISBN)
{
    int i;
    Book *p;

    p = Search(Bookarr, *psize, pISBN);
    if (p == NULL)
    {
        printf("Not find %s.\n", pISBN);
        return -1;
    }
    for (i = p - Bookarr; i < *psize; i++)
        Bookarr[i] = Bookarr[i + 1];
    (*psize)--;

    return 0;
}

Book *Search(Book *Bookarr, int size, char *str)
{
    int i;

    for (i = 0; i < size; i++)
        if (strcmp(str, Bookarr[i].name) == 0 ||
            strcmp(str, Bookarr[i].writer) == 0 ||
            strcmp(str, Bookarr[i].ISBN) == 0)
               return &Bookarr[i];

    return 0;
}

int Reference(Book *Bookarr, int size)
{
    int i, max = 0, min = 0;
    Book *p = Bookarr;

    printf("The number of the books is %d.\n", size);
    for (i = 0; i < size; i++)
    {
         if (p[i].price > p[max].price)
               max = i;
         if (p[i].price < p[min].price)
               min = i;
    }
    printf("The most experience book is\n");
    printf("%s\t%s\t%s\t%.2f\n", p[max].name, p[max].writer, p[max].ISBN, p[max].price);
    printf("The cheapest book is\n");
    printf("%s\t%s\t%s\t%.2f\n", p[min].name, p[min].writer, p[min].ISBN, p[min].price);

    return 0;
}
