#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bookmis.h"

int Comp (const void* left, const void* right)
{
    NODE *p = (NODE *)left;
    NODE *q = (NODE *)right;
    if (strcmp (p -> bookname, q -> bookname) < 0)
        return 1;
    else 
        return p -> bookname == q -> bookname ? 0 : -1;
}
void display (NODE* p)
{
	
	while (p -> next != NULL)
    {	
        printf ("******************************\n");
        printf ("\\*book: %s\n\\*author: %s\n\\*ISBN: %s\n\\*price: %.2lf\n", p -> bookname,
        		p -> author, p-> ISBN, p -> price);
        printf ("******************************\n");
        p = p -> next;
    }
}

NODE* read_file ()
{
	
	FILE *fp;
    NODE* head = (NODE*) malloc (sizeof (NODE ));
    NODE* p = (NODE*)malloc (sizeof (NODE));
    
    head = p;
    char temp[60];
    if ((fp = fopen ("bookmis.csv", "r")) == NULL)
    {
        fprintf (stdout, "Sorry! The system crash!\n");
        exit (1);
    }
    rewind (fp);
    char a[100];
    while (fgets(a, 100, fp) != NULL)
    {
        p -> next = (NODE*) malloc (sizeof (NODE));
      	sscanf (a, "%[^,],%[^,],%[^,],%lf", p -> bookname,
      	        p -> author, p -> ISBN, &p -> price);
        p = p -> next;
    }
    p = NULL;
    
    fclose (fp) ;
    
	return head;
}



void Query (void) 
{
	NODE* head = (NODE*) malloc (sizeof (NODE));
	NODE* p = read_file ();
	head = p;
    int code, flag;
    char tp[50];
	while (code = query_menu () != 4)
	{
		printf ("Please input the keywords of your book:\n");
		getchar ();
		gets (tp);
		switch(code)
		{
               case 1:  p = head;
               		    flag = 0;
               		    while (p != NULL)
                        {	
                            char *m = strstr (p -> bookname, tp);
                            if (m != NULL)
                            {
                                printf ("*********************************\n");
                                printf ("%s\n%s\n%s\n%.2lf\n", p -> bookname, p -> author, 
                                         p -> ISBN, p -> price);
                                printf ("*********************************\n");
                                flag = 1;
                            }
                            p = p -> next;
                        } 
                        if (flag == 0)
                       	 	printf ("NO FIND !\n");
                        break;
				case 2: p = head;
						flag = 0;
						while (p != NULL)
	                    {
                        	if (strcmp (tp, p -> author) == 0)
                        	{
                        	 	printf ("*********************************\n");
                                printf ("%s\n%s\n%s\n%.2lf\n", p -> bookname, p -> author, 
                                         p -> ISBN, p -> price);
                                printf ("*********************************\n");
                                flag = 1;
                             }
                             p = p -> next;                        
                        }
                        if (flag == 0)
                        	printf ("NO FIND !\n");
						break;
				case 3: p = head;
						flag = 0;
						while (p != NULL)
                        {
                        	if (strcmp (tp, p -> ISBN) == 0)
							{
								printf ("*********************************\n");
                                printf ("%s\n%s\n%s\n%.2lf\n", p -> bookname, p -> author, 
                                         p -> ISBN, p -> price);
                                printf ("*********************************\n");
                             	flag = 1;
                             }
                             p = p -> next;                        
                        }
                        if (flag == 0)
                        	printf ("NO FIND !\n");
						break;
				default: break;
			}
	}    
}

void Append (void)
{
    NODE* head = (NODE *)malloc (sizeof (NODE));
    NODE* p = (NODE*)malloc (sizeof (NODE));
    head = p;
    int l;
    printf ("Please input one bookname of book :\n");
    getchar ();
    while(gets (p -> bookname) && ( l = strlen (p -> bookname)) != 0)
    {
        p -> next = (NODE*) malloc (sizeof (NODE));
        printf ("Please input it's author and ISBN :\n");
        gets (p -> author);
        gets (p -> ISBN);
        printf ("Please input it's price :\n");
        scanf ("%lf", &p -> price);
        p = p -> next;
        printf ("If you want to quit , please input nothing! \n");
        printf ("Or please input another bookname :\n");
        getchar ();
    }

    p = NULL;
    p = head;
    FILE *fp;
    while ((fp = fopen ("bookmis.csv", "a+")) == NULL)
    {
        fprintf (stdout, "Can't open the file!\n");
        exit (1);
    }
    while (p -> next != NULL)
    {
        fprintf (fp, "%s,%s,%s,%.2lf", p -> bookname, p -> author, p -> ISBN, p -> price);
        p = p -> next;
    }
    fclose (fp);
}

void Revise ()
{
	char a[50];
	NODE* head = (NODE*)malloc (sizeof (NODE));
	NODE* p = read_file ();
	head = p;
	int code;
	double n;
	while ((code = revise_menu ()) != 4)
	{
		printf ("Please input the ISBN of this book: \n");
		scanf ("%s", a);
		while (strcmp (a, p -> ISBN) != 0 && p -> next != NULL)
			p = p -> next;
		if (p -> next == NULL && strcmp (a, p -> ISBN) != 0)
		{
			printf ("NO FIND !\n");
			break;
		}
		printf ("%d\n", code);
		switch(code)
		{
			case 1: 
					printf ("Please input the name of this book :\n");
					getchar ();
					gets (a);
					strcpy (p -> bookname, a);
					
					break;
			case 2: 
					printf ("Please input the writer of this book :\n");
					getchar();
					scanf ("%[^\n]", a);
					strcpy (p -> author, a);
					break;
			case 3: 
					printf ("Please input the price of this book:\n");
					scanf ("%lf", &n);
					p -> price = n;
					
					break;
			default: break;
		}
	}
	p = head;
	FILE *fp;
	if ((fp = fopen ("bookmis.csv", "w")) == NULL)
    {
        fprintf (stdout, "Sorry! The system crash!\n");
        exit (1);
    }
	while (p -> next != NULL)
    {
        fprintf (fp, "%s,%s,%s,%.2lf\n", p -> bookname, p -> author, p -> ISBN, p -> price);
        p = p -> next;
    }
	fclose (fp);
	
}

void Delete (void)
{
	NODE* head = (NODE*)malloc (sizeof (NODE));
	NODE* p = read_file ();
	head = p;
    NODE* tp;
	char a[50];
	printf ("Please input your ISBN of your boook :\n");
	getchar ();
	gets(a);
	while (p -> next != NULL)
	{
		if (strcmp (a, p -> next -> ISBN) == 0)
			break;
		p = p -> next;
	}
	if ( p -> next == NULL && strcmp (a, p -> ISBN) != 0)
	{
		printf ("NO FIND !\n");
		return;
    }
    if (strcmp (head -> ISBN, a) == 0)
    {
        tp = head;
        head = head -> next;
        free (tp);
    }
    else if (strcmp (p -> next -> next -> ISBN , a) == 0 && p -> next -> next == NULL)
        free (p -> next);
    else
    {
        tp = p -> next;
        p -> next =  p -> next -> next;
        free (tp);
    }
    p = head;
    FILE *fp;
    if ((fp = fopen ("bookmis.csv", "w")) == NULL)
    {
        fprintf (stdout, "Sorry! The system crash!\n");
        exit (1);
    }
    rewind (fp);
    while (p -> next != NULL)
    {
    	fprintf (fp, "%s,%s,%s,%.2lf\n", p -> bookname, p -> author, p -> ISBN, p -> price);
    	p = p -> next;
	}
	fclose (fp);
}

void Indicition (void)
{

    NODE* head = (NODE *)malloc (sizeof (NODE));
    NODE* p = read_file ();
    head = p;
    NODE* hp = head;
    char a[50];
    double j;
	while ( p -> next != NULL )
	{
		for (hp = p -> next; hp -> next != NULL; hp = hp -> next)
		{
			if (strcmp (p -> bookname, hp -> bookname) > 0)
			{
				strcpy (a , p -> bookname);
				strcpy (p -> bookname , hp -> bookname);
				strcpy (hp -> bookname , a);
				strcpy (a , p -> author);
				strcpy (p -> author , hp -> author);
				strcpy (hp -> author , a);
				strcpy (a , p -> ISBN);
				strcpy (p -> ISBN , hp -> ISBN);
				strcpy (hp -> ISBN , a);
				j = p -> price;
				p -> price = hp -> price;
				hp -> price = j;
			}
		}
		p = p -> next;	
	}
    p = head;
    display (p);
    FILE *fp;
    while ((fp = fopen ("bookmis.csv", "w")) == NULL)
    {
        fprintf (stdout, "Can't open the file!\n");
        exit (1);
    }
    while (p -> next != NULL)
    {
        fprintf (fp, "%s,%s,%s,%.2lf\n", p -> bookname, p -> author, p -> ISBN, p -> price);
        p = p -> next;
    }
    fclose (fp);
}

void Statistics (void)
{
	shu Book[M];
	char min[20], max[20];
	NODE *head = (NODE*) malloc (sizeof (NODE));
	NODE *p = read_file ();
	head = p;
	int sum = 0, i = 0, m;
	double mi = 1000, ma = 0;
	while (p -> next != NULL)
	{
		sum++;
		p = p -> next;
	}
	printf ("**This library has %d books**\n", sum);
	p = head;
	NODE *pri = (NODE*) malloc (sizeof (NODE));
	while (p -> next != NULL)
	{
		for (pri = p -> next; pri -> next != NULL; pri = pri -> next)
		{
			if (p -> price <= pri -> price && p -> price <= mi)
			{
				strcpy (min, p -> bookname);
				mi = p -> price;
			}
			else if (p -> price >= pri -> price && ma <= p -> price)
			{
				strcpy (max, p -> bookname);
				ma = p -> price;
			}
			
			if(strcmp (p -> author, pri -> author) == 0)
			{
				Book[i].bw = 1;
				Book[i].bw++;
				strcpy (Book[i].zuozhe, p -> author);
				for ( m = 0; m <= i; m++)
					if (Book[m].zuozhe == Book[i].zuozhe)
						break;
				if (m != i)
				{
					Book[m].bw++;
					Book[i].bw = 0;
				}
				i++;
			}
		}
		p = p -> next;
	}
	printf ("**Books with the highest price is \<<%s\>>**\n", max);
	printf ("**Books with the low price is \<<%s\>>**\n", min);
	int wa = 0, b = 0;
	strcpy (max, Book[0].zuozhe);
	for (int j = 0; j < i; j++)
	{
		wa += Book[j].bw;
		for (m = j + 1; m < i; m++)
			if (Book[j].bw < Book[m].bw && Book[j].bw != 0 && 
				Book[m].bw != 0 && b <= Book[m].bw)
				{
					strcpy (max, Book[m].zuozhe);
					b = Book[m].bw;
				}
	}
	printf ("**The author with the most books is %s**\n", max);
	printf ("**The number of the authors is %d**\n", i + sum - wa);
}


