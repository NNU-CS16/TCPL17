#include<stdio.h>
#include<stdlib.h>
int values[]={40,10,100,90,20,25};
int compare(const void* a,const void* b)
{
return (*(int*)a-*(int*)b);
}
int main()
{
//int values[]={40,10,100,90,20,25};
qsort(values,6,sizeof(int),compare);
for (int n=0;n<6;n++)
	printf("%d ",values[n]);
return 0;
}
