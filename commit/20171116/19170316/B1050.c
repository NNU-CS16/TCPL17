#include<stdio.h>
#include<math.h>
int main()
{
int N;
scanf("%d",&N);
int put[10000];
for(int i=0;i<N;i++)
scanf("%d",&put[i]);
int arr[10000][10000];
int i,j,a,b,x,y,z;
for(i=N-1;i>0;i--)//排序
{
	for(j=0;j<i;j++)
	{
	if(put[j]<put[j+1])
		{
		int temp=put[j];
		put[j]=put[j+1];
		put[j+1]=temp;
		}
	}
}
y=sqrt(N);//确定M，N
while(N%y!=0)
{y--;}
x=N/y-1;
y--;
a=x;b=y;z=0;
int s=0;
while(s<N)
{
	if(z==x && z==y)
		arr[x][y]=put[s++];
	for(i=z;i<y && s<N;i++) 
		arr[z][i] =put[s++];
        for(i=z;i<x && s<N;i++) 
		arr[i][y]=put[s++];
	for(i=z;i<y && s<N;i++) 
		arr[x][y-i+z]=put[s++];
	for(i=z;i<x && s<N;i++) 
		arr[x-i+z][z]=put[s++];
                z++;
                x--;
                y--;
}
for(i=0;i<=a;i++)
{
	for(j=0;j<b;j++)
		printf("%3d",arr[i][j]);
		printf("%d\n",arr[i][b]);
}
return 0;
}
