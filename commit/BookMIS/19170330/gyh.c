#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gyh.h"

struct book *Search_Book_ISBN(char ISBN, struct book *head_book)
{
    struct book *ptr_book;
    int flag=0;
    for (ptr_book=head_book; ptr_book; ptr_book=ptr_book->book_next)
    {
        if(ptr_book->ISBN == ISBN)
        {
            printf("图书ISBN：%s\n", ptr_book->ISBN);
            printf("图书名字：%s\n", ptr_book->book_name);
            printf("图书价格：%f\n", ptr_book->price);
            printf("图书作者：%s\n", ptr_book->author);
            printf("\n");
            flag++;
        }
    }
    if(flag == 0)
    {
        printf("无信息！\n");
    }
    return head_book;
}

struct book *Search_Book_name(char *b_name, struct book *head_book)
{
    struct book *ptr_book;
    int flag=0;
    for (ptr_book=head_book; ptr_book; ptr_book=ptr_book->book_next)
    {
        if(strcmp(ptr_book->book_name, b_name)==0)
        {   
            printf("图书ISBN：%s\n",ptr_book->ISBN);
            printf("图书名字：%s\n",ptr_book->book_name);
            printf("图书价格：%f\n",ptr_book->price);
            printf("图书作者：%s\n",ptr_book->author);
            printf("\n");
            flag++;
        }
    }
    if(flag==0)
    {
        printf("无信息!\n");
    }
    return head_book;
}

struct book *Search_Author_name(char *a_name, struct book *head_book)
{
    struct book *ptr_book;
    int flag = 0;
    for (ptr_book=head_book; ptr_book; ptr_book=ptr_book->book_next)
    {   
        if(strcmp(ptr_book->book_name, b_name)==0)
        {
            printf("图书ISBN：%s\n",ptr_book->ISBN);
            printf("图书名字：%s\n",ptr_book->book_name);
            printf("图书价格：%f\n",ptr_book->price);
            printf("图书作者：%s\n",ptr_book->author);
            printf("\n");
            flag++;
        }
    }
    if(flag==0)
    {
        printf("无信息!\n");
    }
    return head_book;
}

struct book *Insert_Book(struct book *head_book, struct book *stud_book)
{
    struct book *ptr_b, *ptr1_b, *ptr2_b;
    ptr2_b = head_book;
    ptr_b = stud_book;
    if(head_book == NULL)
    {
        head_book = ptr_b;
        head_book->book_next = NULL;
    }
    else{
        while ((ptr_b->ISBN > ptr2_b->ISBN) && (ptr2_b->book_next!=NULL))
        {
            ptr1_b = ptr2_b;
            ptr2_b = ptr2_b->book_next;
        }
        if(ptr_b->ISBN <= ptr2_b->ISBN)
        {
            if(head_book==ptr2_b)
                head_book = ptr_b;
            else 
                ptr1_b->book_next=ptr_b;
                ptr_b->book_next=ptr2_b;
        }
        else
        {
            ptr2_b->book_next = ptr_b;
            ptr_b->book_next = NULL;
        }
    }
    return head_book;
}

struct book *Change_Book(struct book *head_book, char ISBN)
{
 	struct book *p;
	p = Search_Book_ISBN(ISBN, head_book);
	printf("The new information: \n");
    printf("book name:  ");
	scanf("%s", p->name);
	getchar();
	printf("Author: ");
	scanf("%s", p->author);
	getchar();
	printf("Price: ");
	scanf("%f", &p->price);
	getchar();
	return head_book;
}

struct book *Delete_Book(struct book *head_book, char ISBN)
{
    struct book *ptr1_book, *ptr2_book;
    while (head_book!=NULL && head_book->ISBN==ISBN)
    {
        ptr2_book = head_book;
        head_book = head_book->book_next;
        free(ptr2_book);
    }
    if(head_book==NULL)
        return NULL;

void Print_Book(struct book *head_book)
{	
	struct book *ptr_b;
	if (head_book == NULL)
	{
		printf("无记录\n");
	}
	printf("\nISBN\n名字\n价格\n作者\n\n");
	for (ptr_b=head_book; ptr_b; ptr_b=ptr_b->book_next)
		printf("%s\t%s\t%f\t%s\t\n\n",ptr_b->ISBN, ptr_b->book_name, ptr_b->price, ptr_b->author);
	}

int Report_Book(struct book *head_book, int size_book)
{
	struct book *p = head_book;
	struct book *pmax = NULL;
	struct book *pmin = NULL;
	char *pmax_str;
	int num[20];
	int i=0, k=1;
	double max_p=0.0, min_p=100.0;
	int max_arr=0;
	char *str[20]={0};
	int arr[20]={0};
	str[0] = p->author;
	while (p!=NULL)
	{
		int flag = -1;
		if (p->price > max_p)
		{
			max_p = p->price;
			pmax = p;
		}
		if (p->price < min_p)
		{
			min_p = p->price;
			pmin = p;
		}
		for (i=0;i<k;i++)
		{
			if (strcmp(str[i], p->author) == 0)
            {
                arr[i]++;
                flag = 0;
            }
        }
        if (flag == -1)
        {
            str[k] = p->author;
            arr[k]++;
            k++;
        }
        p = p->next;
    }
    for (i=0; i<k; i++)
    {
        if(arr[i] > max_arr)
        {
            max_arr = arr[i];
            pmax_str = str[i];
        }
    }
    printf("图书数目为   %d\n",size);
    printf("作者数目为   %d\n",k);
    printf("拥有图书最多的作者   %s\n", pmax_str);
    printf("价格最高的图书   %s\n", pmax->book_name);
    printf("价格最低的图书   %s\n", pmin->book_name);
    return 0;
}

