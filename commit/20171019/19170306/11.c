#include<stdio.h>
#include<stdlib.h>
void fillandprint(int *,int *,int,int);
int main()
{
int n,line,i;
scanf("%d",&n);
for(i=0;i<2*n;i++)printf(" ");printf("   1\n");if(n==1)return 0;
for(i=0;i<2*n-2;i++)printf(" ");printf("   1   1\n");if(n==2)return 0;
int lineone[n];lineone[0]=1;
int linetwo[n];linetwo[0]=1;linetwo[1]=1;
for (line=3;line<=n;line++)
	{
	fillandprint(linetwo,lineone,line,n); line++;
	fillandprint(lineone,linetwo,line,n);	
	}
return 0;
}

void fillandprint(int * lineup,int * linedown,int line,int n)
{
int i;
linedown[0]=1;for (i=0;i<=2*(n-line)+1;i++)printf(" ");printf("%4d",1);
	for (i=1;i<line-1;i++)
	{
	linedown[i]=lineup[i-1]+lineup[i];
	printf("%4d",linedown[i]);
	}
linedown[line-1]=1;printf("%4d\n",1);
}

