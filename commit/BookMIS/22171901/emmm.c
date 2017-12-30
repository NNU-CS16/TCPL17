#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "emmm.h"

struct Book *load_book ()
{
    struct Book head;
    struct Book *p , *pre;
    pre = &head;
    FILE *fp;
    char str[100];
    fp = fopen ("book.csv" , "r");
    if (fp == NULL)
       printf ("无法打开文件！\n");
    while (fgets(str , 100 , fp) != NULL)
    {
    	p = (struct Book*)malloc(sizeof(struct Book));
 	sscanf (str , "%s%s%s%lf" , p->name , p->auth , p->ISBN , &p->price);
        p->next = NULL;
  	pre->next = p;
	pre = p;
    }
    return head.next;
}
   
    
struct Book *search_book_ISBN (char *ISBN , struct Book *head_book)
{  
    struct Book *p = head_book;
    do
    {
    	if (strcmp(p->ISBN, ISBN) == 0)
    	{
    	    return p;
    	}
	p = p->next;
    }
    while (p != NULL);
    return NULL;
}


struct Book *search_book_auth (char auth[] , struct Book *head_book)
{
    struct Book head;
    struct Book *p;
    p = &head;
    while (auth != p->auth)
    {
       	p = p->next;
        if (p = NULL)
           printf ("Error!\n");
           break;
    }
    if (p != NULL)
        printf ("%s%s%s%lf" , p->name , p->auth , p->ISBN , p->price);
}


struct Book *search_book_name (char name[] , struct Book *head_book)
{
    struct Book *p = head_book;
    int i , j , cnt , flag;
    char keyword[20];
    int len1 = strlen (p->name);
    int len2 = strlen (keyword);
    while (p != NULL)
    {
    for (i = 0; i < len1; i++)
   {
        for (j = 0; j < len2; j++)
        {
           if (p->name[i] == keyword[i])
           {
              cnt++;
           }
           else
              break;
         }
          
         if (cnt >= len2)
         {
	    printf ("%s%s%s%lf" , p->name , p->auth , p->ISBN , p->price);
            flag++;
            break;
         }
         p = p->next;
      }
     }
         if (flag == 0)
            printf ("Error!\n");
}

struct Book *update_book(struct Book *head_book)
{
    struct Book *p = head_book;
    struct Book *p1;
    char cmd , ISBN[8];
    p1 = search_book_ISBN(ISBN , p);
    if (p1 == NULL)
       printf ("Error!\n");
    else
       {
          printf ("====a.修改书名====\n");
          printf ("====b.修改作者====\n");
          printf ("====c.修改价格====\n");
          printf ("选择所需修改的信息:\n");
          scanf ("%c" , &cmd);
          switch (cmd)
          {
             case'a':
                  scanf ("%s" , p1->name);
 	          break;
	     case'b':
		  scanf ("%s" , p1->auth);
	          break;
             case'c':
 		  scanf ("%lf" , &p1->price);
                  break;
             default:
                  printf ("Error!\n");
                  return p1;
           } 

           return p1;
        }
}


struct Book *insert_book (struct Book *head_book)
{
    struct Book *p_insert = (struct Book *)malloc(sizeof(struct Book));
    printf ("ISBN:\n");
    scanf ("%s" , p_insert->ISBN);
    printf ("书名：\n");
    scanf ("%s" , p_insert->name);
    printf ("作者：\n");
    scanf ("%s" , p_insert->auth);
    printf ("价格：\n");
    scanf ("%lf" , &p_insert->price);
    p_insert->next = head_book;
    head_book = p_insert;
    return head_book;
}



struct Book *delete_book(struct Book *head_book , char *ISBN)
{
    struct Book *p_delete , *p;
    p = head_book;
    p_delete = search_book_ISBN(ISBN , p);
    if (p_delete == NULL)
       printf ("Error!\n");
    else
    {
       p = head_book;
       while (p->next != p_delete)
       { 
            p = p->next;
       }
       p->next = p_delete->next;
       p_delete->next = NULL;
     }
}  
              


void list_book (struct Book * head_book)
{
    struct Book *p = head_book;
    do
    {
        printf ("%s%s%s%lf" , p->ISBN , p->name , p->auth , p->price);
        p = p->next;
    }
    while (p != NULL);
}


void report_book (struct Book *head_book)
{
 int i, n, m;
    i = n = m = 0;
    struct Book* p = head_book;
    while (p != NULL)
    { 
  	i++;
	p = p->next;
    }
    printf("图书数目：%d\n", i);


    p = head_book;
    struct Book* pi;
    struct Book* pp;
    do
    {
	pi = head_book;
	do
	{
	    if (strcmp(p->auth, pi->auth) == 0)
	    {
		n++;
	    }
	    pi = pi->next; 
	}
	while (pi != NULL);
	if (n > m)
	{
	    m = n;
    	    pp = p;
	}
    	p = p->next;
	n = 0;
    }
    while (p != NULL);
    printf("图书本数最多的作者：%s\n", pp->auth);

 
    p = head_book;
    n = i;
    while (p->next != NULL)
    {
	pi = p->next;
	do
	{
	    if (strcmp(p->auth, pi->auth) == 0)
	    {
		n--;
	 	break;
	    }
 	    pi = pi->next;
	}
	while (pi != NULL);
        p = p->next;
    }
    printf("作者个数：%d\n", n);
    

    double a;
    p = head_book;
    a = p->price;
    do
    {
 	if (p->price > a)
	    a = p->price;
    	p = p->next;
    }
    while (p != NULL);
    printf("图书最高单价为：%lf\n", a);


    p = head_book;
    a = p->price;
    do
    {
	if (p->price < a)
	    a = p->price;
    	p = p->next;
    }
    while (p != NULL);
    printf("图书最低单价为：%lf\n", a);
}


int save (struct Book *head_book)
{
    struct Book *p = head_book;
    FILE *fp;
    fp = fopen ("book.csv" , "w");
    if (fp == NULL)
       return -1;
    do
    {
        fprintf(fp, "%s\t", p->name);
	fprintf(fp, "%s\t", p->auth);
	fprintf(fp, "%s\t", p->ISBN);
	fprintf(fp, "%lf\n", p->price);
      	p = p->next;
    }
    while (p != NULL);
    fclose(fp);
    return 0;
}


        	    
