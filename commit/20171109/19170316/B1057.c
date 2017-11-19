#include<stdio.h>

void E(int x)
{
	int i,q;int a[100000];int z=0;
	for(i=0;x!=0;i++)
		{a[i]=x%2;x=x/2;z++;}
	int r=0,t=0,p;
	for(p=0;p<=z;p++)
		{if(a[p]==0)
			r++;
		if(a[p]==1)
			t++;}
	printf("%d %d",r,t);
}

int main()
{
char Z[1001];
int N[26]={0};
scanf("%[^\n]",Z);
int i,k=0;
for(i=0;Z[i]!='\0';i++)
{
        if(Z[i]>='A' && Z[i]<='Z')
        {
        Z[i]=Z[i]+32;
        k=Z[i]-97;
        N[k]++;
        } 
        if(Z[i]>='a' && Z[i]<='z')
        {
        k=Z[i]-97;
        N[k]++;
	}
}
int s=0;
for(i=0;i<=25;i++)
s=s+(N[i])*(i+1);
E(s);
return 0;
}
