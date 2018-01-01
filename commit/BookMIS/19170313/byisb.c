#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "head.h"
void searchbyisbn(struct Book* ISBN[])		//bsearch
{extern long int booknumber;
char isbn[8];scanf("%s",isbn);setbuf(stdin,NULL);
int left=0,right=booknumber-1,mid;
struct Book* target=NULL;	
while (right-left>1)
	{
	mid=left+(right-left)/2;
	if (strcmp(isbn,ISBN[mid]->ISBN)==0)
		{
		target=ISBN[mid];
		break;
		}
	if (strcmp(isbn,ISBN[mid]->ISBN)<0)
		{
		right=mid;
		continue;
		}
	if (strcmp(isbn,ISBN[mid]->ISBN)>0)
		{
		left=mid;
		continue;
		}
	}
if (right-left==1)
	{
	if (strcmp(isbn,ISBN[left]->ISBN)==0)
