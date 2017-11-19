#include<stdio.h>
int ascending(int/*,int,int,int,int*/);
int disascending(int/*,int,int,int,int*/);
//int sort(int* p,int n,int(*pc)(int,int));
//int mul()

int main()
{
int N;
scanf("%d",&N);
int i;
int x,y,z=N;
int a,b,c,d;
d=z%10;
c=((z-d)/10)%10;
b=((z-10*c-d)/100)%10;
a=(z-d-10*c-100*b)/1000;
if(a==b&&a==c&&a==d)
printf("%d-%d=0\n",N,N);
else
{
while(z!=6174)
{x=ascending(z);
y=disascending(z);
z=x-y;
printf("%d-%d=%d\n",x,y,z);
//printf("\n");}
}
return 0;
}
}
int ascending(int N)
{
int s[4];
int i,j,temp;
int a,b,c,d;
d=N%10;
c=((N-d)/10)%10;
b=((N-10*c-d)/100)%10;
a=(N-d-10*c-100*b)/1000;
s[0]=a;
s[1]=b;
s[2]=c;
s[3]=d;
for(i=0;i<3;i++)
for(j=0;j<3-i;j++)
{
if(s[j]>s[j+1])
{temp=s[j];
s[j]=s[j+1];
s[j+1]=temp;
continue;}
}
return s[0]+10*s[1]+100*s[2]+1000*s[3];
}

int disascending(int N)
{
int s[4];
int i,j,n,temp;
int a,b,c,d;
d=N%10;
c=((N-d)/10)%10;
b=((N-10*c-d)/100)%10;
a=(N-d-10*c-100*b)/1000;
s[0]=a;
s[1]=b;
s[2]=c;
s[3]=d;
for(i=0;i<3;i++)
for(j=0;j<3-i;j++)
{
if(s[j]<s[j+1])
{temp=s[j];
s[j]=s[j+1];
s[j+1]=temp;
continue;}
}
return s[0]+10*s[1]+100*s[2]+1000*s[3];
}

