#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"chain.h"
//Release the list
book *release(book *head)
{
	book *p;
	if(head==NULL)
	return NULL;
	while(head!=NULL)
	{
	p=head;
	head=head->next;
	free(p);
	}
	free(head);
	return head;
}
//Release the list
writer *Release(writer *head)
{
        writer *p;
        if(head==NULL)
        return NULL;
        while(head!=NULL)
        {
        p=head;
        head=head->next;
        free(p);
        }
        free(head);
        return head;
}

//Insert the node entered before the head node
book *insertbeforehead(book *newp,book *head)
{
	newp->next=head;
	head=newp;
	return head;
}
//Insert the node entered before designated node
book *insert(book *newp,book *head)
{
	book *prev,*p;
	prev=NULL;p=head;
	while(p!=NULL)
	{
		if(strcmp(p->bookname,newp->bookname)>0)	break;
		prev=p;p=p->next;
	}
	newp->next=p;
	if(p==head)
		head=newp;
	else
		prev->next=newp;
	return head;
}
//Delete the node entered
book *Backspace(book *newp,book *head)
{
	book *p,*prev;
	prev=NULL;p=head;
	while(p!=NULL)
	{
		if(strcmp(p->ISBN,newp->ISBN)==0)	break;
		prev=p;p=p->next;
	}
	if(p==NULL)
		return head;
	if(p==head)
		head=head->next;
	else
		prev->next=p->next;
	free(p);
	return head;
}
//Print the list
void print(book *head)
{
	book *p=head;
	while(p!=NULL)
	{
		printf("\t\t%s,%s,%s,%f\n",p->bookname,p->author,p->ISBN,p->price);
		p=p->next;
	}
}
