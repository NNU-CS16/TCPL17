#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	int a=0;
	int b;
	int j=100;
	int k;
	int n;
	scanf("%d",&n);

	
	char name[n][10];
	char number[n][10];
	int grade[n];

	for(i=0;i<n;i++)
	   {
	      scanf("%s%s%d",name[i],number[i],&grade[i]);

	      if(grade[i]>=a)
		{
		  a=grade[i];
		  b=i;
		}
	      if(grade[i]<=j)
		{
	          j=grade[i];
		  k=i;
		}
	    }

	printf("%s %s\n",name[b],number[b]);
	printf("%s %s\n",name[k],number[k]);

	return 0;
}


