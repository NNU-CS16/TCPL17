#include <stdio.h>
#include <math.h>
int main()
{
	int A,DA,B,DB;
	printf("请依次输入A，DA，B，DB的值：\n");
	scanf("%d %d %d %d",&A,&DA,&B,&DB);

	int a,mask,n,k,i;
	for(a=A,mask=1;a>=9;)
	{
	   a=a/10;
	   mask=mask*10;
	}
	for(n=0,k=mask*10;k>1;)
	{
	   i=(A%k)/mask;
	   if(i==DA) n++;
	   mask=mask/10;
	   k=k/10;
	}

	int b,m;
	for(b=B,mask=1;b>=9;)
	{
	   b=b/10;
	   mask=mask*10;
	}
	for(m=0,k=mask*10;k>1;)
	{
	   i=(B%k)/mask;
	   if(i==DB) m++;
	   mask=mask/10;
	   k=k/10;
	}

        int p,c,sum1,q,d,sum2;
	for(p=1,sum1=0,c=0;c<=(n-1);)
        {
           sum1=sum1+p*DA;
           p*=10;
           c=log10(p);
        }
        for(q=1,sum2=0,d=0;d<=(m-1);)
        {
           sum2=sum2+q*DB;
           q*=10;
           d=log10(q);
        }

        printf("%d\n",sum1+sum2);

        return 0;
}
