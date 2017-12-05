#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void Msort(int *b,int *count,int max);
void Isort(int *b,int *count);
int judge(int *a,int *b,int count,int max);
int cmp(const void *a,const void *b);

int main(void)
{
	int max=0,i=0,j=0,flag=1;
	int a[200]={0},b[201]={0};
	int count[201]={1};
	scanf("%d",&max);
	for(i=0;i<max;i++)
	scanf("%d",&a[i]);
	scanf("%d",&b[0]);	//排序后的数组 
	for(i=1;i<max;i++)
	{
	scanf("%d",&b[i]);
 if(b[i]>=b[i-1])//将顺序排列的个数记录下来，如果不顺序排列则记录在下一个组 
	 count[j]++;														
 if(b[i]<b[i-1])
	 count[++j]=1;
	}
	if(judge(a,b,count[0],max)==0)
		flag=0;
	if(flag==1)
	{
		printf("Insertion Sort\n");
		Isort(b,count);
	}
	if(flag==0)
	{
		printf("Merge Sort\n");
		Msort(b,count,max);
	}
	printf("%d",b[0]);
	for(i=1;i<max;i++)
		printf(" %d",b[i]);	
	return 0;
}
int cmp(const void *a,const void *b)
{
	return *(int *)a-*(int *)b;
}

void Msort(int *b,int *count,int max)
{
	int i=0,min=count[0],total=0,j=0;
	for(i=0;count[i+1]!=0;i++)
	{
		if(min>count[i])	//这个复杂的求最小子数组长度是为了防止出现如子数组长度为6,8的情况 
	{					//明显6不可能成为子数组长度。只有2的n次方才有可能。 
		for(j=2;count[i]%j==0&&min%j==0;j*=2);
		min=j/2;
	}
	}
	while(total+min*2<=max)	//前面的部分再进行一次两个数组合并排序 
	{
		qsort(b+total,min*2,sizeof(int),cmp); 
		total+=min*2;
	}
	if(max-total>min)	//最后一个数组有可能不为2的倍数，但如果需要，也要和它前面的子数组合并 
		qsort(b+total,min+max%min,sizeof(int),cmp);
}

void Isort(int *b,int *count)	//插入排序只需要把已排序完成的后面一位进行一遍插入排序就可以了 
{
	int i=0,temp=b[count[0]];
	for(i=count[0]-1;i>=0;i--)
	{
		if(temp<b[i])
			b[i+1]=b[i];
		else	break;
	}
	b[i+1]=temp;
}
int judge(int *b,int *a,int count,int max)
{
	int i=0;
	for(i=count;i<max;i++)	//从第一个有序的子数组之后开始对比 
		if(a[i]!=b[i])//若和原数组对不上，是归并排序。全对上了则是插入排序 
		return 0;
		return 1;
}
