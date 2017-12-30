#include<stdio.h>
#include"chain.h"
#include"readandwrite.h"
#include"function.h"
void Print()
{
	book *head;
	head=read();
	print(head);
	release(head);
}
