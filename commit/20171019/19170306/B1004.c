#include<stdio.h>
int main()
{
int n,i,max=0,min=0;
scanf("%d",&n);
char name[n][10];
char num[n][10];
int  score[n];
	for (i=0;i<n;i++)
	{
	scanf("%s",name[i]);
	scanf("%s",num[i]);
	scanf("%d",score+i);
	if(score[i]>score[max]) max=i;
	if(score[i]<score[min]) min=i;
	}
printf("%s %s\n",name[max],num[max]);
printf("%s %s\n",name[min],num[min]);
return 0;
}
