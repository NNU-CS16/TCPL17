#include<stdio.h>
int clarify(int [],int [],int [],int,int);
void sort(int [],int);
int main()
{
int i=0,pairnum,guestnum,count;
scanf("%d",&pairnum);
int pair1[pairnum],pair2[pairnum];
		for (i=0;i<pairnum;i++)
		scanf("%d%d",pair1+i,pair2+i);
scanf("%d",&guestnum);
int guest[guestnum];
		for (i=0;i<guestnum;i++)
		scanf("%d",guest+i);
		count=clarify(guest,pair1,pair2,guestnum,pairnum);
		sort(guest,guestnum);
i=0;
while (guest[i]==0)
	i++; 
printf("%d\n",count);
for (;i<guestnum;i++)
	printf("%d ",guest[i]);
	printf("\n");
return 0;
}

int clarify(int guest[],int pair1[],int pair2[],int guestnum,int pairnum)
{
int i,j,p,q,count=guestnum;
for (i=0;i<guestnum;i++)
	{
	if (guest[i]==0)continue;
	for (j=0;j<pairnum;j++)
		if (pair1[j]==guest[i]||pair2[j]==guest[i])
			{
			for (p=i+1;p<guestnum;p++)
				if (guest[p]==pair2[j]||guest[p]==pair1[j])
				{guest[p]=0;guest[i]=0;pair1[j]=0;pair2[j]=0;count-=2;}
			}
	}	
return count;
}

void sort(int guest[],int guestnum)
{
int i,j,min,temp;
for (i=0;i<guestnum;i++)
	{
	min=i;
	for (j=i+1;j<guestnum;j++)
		if (guest[j]<guest[min])
		min=j;
	temp=guest[i];
	guest[i]=guest[min];
	guest[min]=temp;
	}
}
