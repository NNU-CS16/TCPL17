#include <stdio.h>
void Merge(int a[], int left, int right)
{
	int mid=(left+right)/2; 
	int c[100]; 
	int i=left; 
	int j=mid+1; 
	int k=left;
	for(;i<=mid&&j<=right;)
	{
		if(a[i] > a[j])
		{
			c[k] = a[j];
			k++;
			j++;
		}
		else
		{
			c[k] = a[i];
			k++;
			i++;
		}
	}
		for(;i<=mid;c[k]=a[i],k++,i++)
		for(;j<=right;c[k]=a[j],k++,j++)
		for(i=left;i<=right;i++)
			a[i]=c[i];
}

void Insertion_Sort(int a[ ],int insert)
{
	int temp;
	int n = 0;
	int b;
	while(n < insert)
	{
		n++;
		if(a[insert]<a[n]) 
		{
			temp=a[insert]; 
			for(b=insert; b>n; b--) 
			a[b]=a[b-1]; 
			a[n]=temp; 
		} 
	}
}

int main()
{
	int n,m;
	scanf("%d\n",&m);
	int i,j,k,p,q;
	int flag = 6,num = 0,sign;
	int a[100];
	int b[100];
	int c[100];
	for(i = 0;i < m;i++)
	{
		scanf("%d",&a[i]);
		c[i] = a[i];
	}
	for(p = 1;p <= m;p++)
		scanf("%d",&b[i]);
	for(p=1; p<=m ; p++) 
	{
		Insertion_Sort(a,p); 
		num=0; 
		for(q=0; q<m; q++) 
			if(a[q]==b[q]) 
				num++; 
		if(num==m) 
		{
			sign = 1;
			break;
		}
	}
	for(j=2; j<m; j*=2) 
	{
		for(i=0; (i+1)*j<m; i++) 
		{
			flag = 0;
			Merge(c,i*j,(i+1)*j-1); 
			for(k=0; k<m; k++)
				if(b[k]==c[k]) 
					flag++;
			if(flag==m)
			{
				sign = 0;
				break;
			}
		
		if(sign == 0)
			break;
		}
		if(sign == 0)
			break;

	}

	if(sign == 1)
	{
		printf("Insertion Sort\n"); 
		n = p + 1;
		Insertion_Sort(a,n); 
		for(i=0; i<m-1; i++) 
			printf("%d ",a[i]); 
		printf("%d\n",a[m-1]);
	}

	else
	{
		printf("Merge Sort\n"); 
		n = j * 2;
		for(i=0; (i+1)*n<m ;i++) 
			Merge(c,i*n,(i+1)*n-1); 
		for(i=0; i<m; i++) 
			printf("%d ",c[i]); 
		printf("%d\n",c[m-1]); 
	}
	return 0;
}



			

