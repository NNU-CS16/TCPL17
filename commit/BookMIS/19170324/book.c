#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
void menu()
{
    printf("======================= Welcome to our library! =======================\n");
    printf("   You can implement the following functions in our library~(ღ˘⌣˘ღ)~   \n\n");
    printf("                                 menu                                  \n");
    printf("                    ◤ --------------------------◥                      \n");
    printf("                     ・Query book entries     (i)                      \n");
    printf("                     ・Add book entries       (a)                      \n");
    printf("                     ・Update book entries    (u)                      \n");
    printf("                     ・Delete book entries    (d)                      \n");
    printf("                     ・Display book entries   (s)                      \n");
    printf("                     ・Display book statistics(c)                      \n");
    printf("                     ・Exit system            (q)                      \n");
    printf("                    ◣ --------------------------◢                      \n\n");
    printf("Please enter the command:\n");
}

void write_file(struct book *head)
{
    char sx[30], ch;
    struct book *p = NULL;
    FILE *fp;
    if ((fp = fopen("information.csv", "w+")) == NULL)
    {
        printf("Error!\n");
        exit(1);
    }
    p = head;
    while (p != NULL)
    {
        fputs(p->title, fp);
        fputc(',', fp);

        fputs(p->author, fp);
        fputc(',', fp);

        fputs(p->ISBN, fp);
        fputc(',', fp);

        sprintf(sx, "%lf", p->price);
        fputs(sx, fp);
        fputc('\n', fp);

        p = p->next;
    }
    fclose(fp);
}

void search(struct book *head, char *target, int way)
{
    int i, j, k;
    struct book *p = NULL;
    p = head;
    switch (way)
    {
        case 1:
            while (p != NULL)
            {
                if (strcmp(p->ISBN, target) == 0)
                {
                    printf("%s\t%s\t%s\t%f\n", p->title, p->author, p->ISBN, p->price);
                    break;
                }
                p = p->next;
            }
            break;
        case 2:
            while (p != NULL)
            {
                for (i = 0; i <= strlen(p->title) - 1; i++)
                {

                    for (k = 0, j = i; p->title[j] == target[k]; k++, j++)
                        printf("%d\n", k);
                    if (k == strlen(target))
                        if (p->title[i + k] == ' ' || p->title[i + k] == '\0')
                            printf("%s\t%s\t%s\t%f\n", p->title, p->author, p->ISBN, p->price);
                }
                p = p->next;
            }
            break;
        case 3:
            while (p != NULL)
            {
                if (strcmp(p->author, target) == 0)
                    printf("%s\t%s\t%s\t%f\n", p->title, p->author, p->ISBN, p->price);
                p = p->next;
            }
            break;
        default:
            printf("Error Command!\n");
    }
}

void insert(struct book *head, char *add_ISBN, char *add_title, char *add_author, double add_price)
{
    struct book *p = NULL, *tmp = NULL;
    int flag = 0;
    p = head;
    while (p != NULL)
    {
        flag = 0;
        if (strcmp(p->ISBN, add_ISBN) == 0)
        {
            printf("The SIBN has already existed!\n");
            flag = 1;
        }
        if (atof(p->ISBN) < atof(add_ISBN))
            tmp = p;
        if (flag == 0);
            break;
        scanf("%s", add_ISBN);
    }
    struct book *newp = (struct book *)malloc(sizeof(struct book));
    if (p != head)
    {
        newp->next = tmp->next;
        tmp->next = newp;
    }
    else
    {
        newp->next = head;
        head = newp;
    }
    strcpy(newp->ISBN, add_ISBN);
    strcpy(newp->title, add_title);
    strcpy(newp->author, add_author);
    newp->price = add_price;
}

void update(struct book *head, char *update_ISBN, char *update_title, char *update_author, double update_price)
{
    int flag = 0;
    struct book *p;
    p = head;
    while (p != NULL)
    {
        if (strcmp(p->ISBN, update_ISBN) == 0)
        {
            flag = 1;
            break;
        }
        p = p->next;
    }
    if (flag == 0)
        printf("The book items you want to modify do not exist!\n");
    if (flag == 1)
    {
        strcpy(p->title, update_title);
        strcpy(p->author, update_author);
        p->price = update_price;
        printf("You have updated success!\n");
    }
}

void delete(struct book *head, char *delete_ISBN)
{
    int flag = 0;
    struct book *p = NULL, *pre = NULL;
    p = head;
    while (p != NULL)
    {
        if (strcmp(p->ISBN, delete_ISBN))
        {
            flag = 1;
            break;
        }
        pre = p;
        p = p->next;
    }
    if (flag == 0)
        printf("The book items you want to delete do not exist!\n");
    if (flag == 1)
    {
        if (p == head)
            head = head->next;
        else
            pre->next = p->next;
        free(p);
    }
}

void show(struct book *head)
{
    int i, j;
    struct book *p = NULL, *pm[15], *temp;
    p = head;
    for (i = 0; i <= 14; i++)
    {
        pm[i] = p;
        p = p->next;
    }

    for (i = 0; i < 14; i++)
        for (j = 0; j < 14 - i; j++)
            if (strcmp(pm[j]->title, pm[j + 1]->title) > 0)
            {
                temp = pm[j];
                pm[j] = pm[j + 1];
                pm[j + 1] = temp;
            }
    for (i = 14; i >= 0; i--)
        printf("%s\t%s\t%s\t%f\n", pm[i]->title, pm[i]->author, pm[i]->ISBN, pm[i]->price);
}

void count(struct book *head)
{
    int cnt = 0, flag = 0;
    struct book *p = NULL, *pre = NULL, *pmax = NULL, *pmin = NULL;
    p = head;
    while (p != NULL)
    {
        cnt++;
        p = p->next;
    }
    printf("Number of books:%d\n", cnt);

    cnt = 0;
    p = head;
    while (p != NULL)
    {
        flag = 0;
        pre = head;
        while (pre != p)
        {
            if (strcmp(pre->author, p->author) == 0)
            {
                flag = 1;
                break;

            }
            pre = pre->next;
        }
        if (flag == 0)
            cnt++;
        p = p->next;
    }
    printf("Number of author:%d\n", cnt);

    p = head;
    pmax = head;
    pmin = head;
    while (p != NULL)
    {
        if (pmax->price < p->price)
            pmax = p;
        if (pmin->price > p->price)
            pmin = p;
        pre = p;
        p = p->next;
    }
    printf("The most expensive books:\n");
    printf("%s\t%s\t%s\t%f\n", pmax->title, pmax->author, pmax->ISBN, pmax->price);
    printf("The lowest price books are:\n");
    printf("%s\t%s\t%s\t%f\n", pmin->title, pmin->author, pmin->ISBN, pmin->price);

}

