#include<stdio.h>

void Insertion_Sort(int a[ ],int insert)
{
	int temp;
	int i,j;
	for(i=0; i<insert; i++)
	{
		if(a[insert]<a[i])
		{
			temp=a[insert];
			for(j=insert; j>i; j--)
				a[j]=a[j-1];
			a[i]=temp;
		}
	}
}

void Merge(int a[], int left, int right)
{
	int mid=(left+right)/2;
	int c[100];
	int i=left;
	int j=mid+1;
	int k=left;
	while(i<=mid&&j<=right)
	{
		if(a[i]<=a[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		else
		{
			c[k]=a[j];
			k++;
			j++;
		}
	}
	while(i<=mid)
	{
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<=right)
	{
		c[k]=a[j];
		k++;
		j++;
	}
	for(i=left; i<=right; i++)
		a[i]=c[i];
}



int main( )
{
	int n,N;
	scanf("%d\n",&N);
	int i,j,k,p,q;
	int flag=0,num=0,sign;
	int a[100];
	int b[100];
	int d[100];
	for(i=0; i<N; i++)
	{
		scanf("%d",&a[i]);
		d[i]=a[i];
	}
	for(i=0; i<N; i++)
		scanf("%d",&b[i]);
	for(p=1; p<=N ; p++)
	{
		Insertion_Sort(a,p);
		num=0;
		for(q=0; q<N; q++)
			if(a[q]==b[q])
				num++;
		if(num==N)
		{
			sign=1;
			break;
		}
	}
	for(j=2; j<N; j*=2)
	{
		for(i=0; (i+1)*j<N; i++)
		{
			flag=0;
			Merge(d,i*j,(i+1)*j-1);
			for(k=0; k<N; k++)
				if(b[k]==d[k])
					flag++;
			if(flag==N)
			{
				sign=0;
				break;
			}
		}
		if(sign==0)
			break;
	}
	if(sign==1)
	{
		printf("Insertion Sort\n");
		n=p+1;
		Insertion_Sort(a,n);
		for(i=0; i<N-1; i++)
			printf("%d ",a[i]);
		printf("%d\n",a[N-1]);
	}
	else
	{
		printf("Merge Sort\n");
		n=j*2;
		for(i=0; (i+1)*n<N ;i++)
			Merge(d,i*n,(i+1)*n-1);
		for(i=0; i<N; i++)
			printf("%d ",d[i]);
		printf("%d\n",d[N-1]);
	}
	return 0;
}


