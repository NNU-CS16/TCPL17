#include<stdio.h>

/*int Z(int s[4])//增序排序
{
	int t,i,j;
	t=s[0];
	for(i=0;i<3;i++)
		for(j=0;j<3-i;j++)
			if(s[j]<s[j+1])
				{t=s[j];s[j]=s[j+1];s[j+1]=t;}
	return s[4];
}

int J(int b[4])//降序排序
{
 int t,i,j;
        t=b[0];
        for(i=0;i<3;i++)
                for(j=0;j<3-i;j++)
                        if(b[j]>b[j+1])
                                {t=b[j];b[j]=b[j+1];b[j+1]=t;}
	return b[5];
}
*/
int A(int a[4])//数组转换为数字
{	
	int c;
	c=1000*a[0]+100*a[1]+10*a[2]+1*a[3];
	return c;	
}
/*
int R(int a)//将数字转换为数组
{
	char b[4];
	sprintf(b,"%d",a);
	return b[4];
}


int main()
{
int s[4],m,n,b[4];
printf("please input a,a四位不完全相同");
char c;int k=0;
scanf("%d",&s[4]);
k++;
while((c=getchar())!='\n')
{
scanf("%d",&s[k]);
k++;
}

while(A(s)!=6174)
{
int k=A(J(s))-A(Z(s));
s[4]=R(k);
}
printf("%d",A(s));
return 0;
}*/

int main()
{
int n,i,j,s,s1,s2;
int a[4];
printf("输入四位不完全相同的数字");
scanf("%d",&n);
do
{
for(i=0;i<4;i++)
	{a[i]=n%10;n=n/10;}
for(i=1;i<4;i++)
	{
	s=a[i];
	for(j=i-1;j>=0;j--)
		{
		if(s<=a[j])
			a[j+1]=a[j];
		else break;
		}	
	a[j+1]=s;
	}
s1=1000*a[0]+100*a[1]+10*a[2]+a[3];
s2=1000*a[3]+100*a[2]+10*a[1]+a[0];
n=s2-s1;
}
while(n!=6174 && n!=0);
printf("%d\n",s2-s1);
return 0;
}

