#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int Comp(const void *a, const void *b)
{
	int arg1=*(int *)a;
	int arg2=*(int *)b;
	if(arg1<arg2)
		return -1;
	if(arg2<arg1)
		return 1;
}

int main( )
{
	int i;
	int ints[ ]={ -2, 99, 0, -743, 2 ,INT_MIN, 4};
	int size=sizeof(ints)/sizeof(*ints);
	qsort(ints,size,sizeof(int),Comp);
	for( i=0; i<size; i++)
		printf("%d ",ints[i]);
	return 0;
}
