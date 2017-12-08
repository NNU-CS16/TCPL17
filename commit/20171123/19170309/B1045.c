#include<stdio.h>

void pai(int a[], int n);
int main()
{

int n,i;
scanf("%d", &n);
int a[n];
for(i=0;i<n;i++)
 {scanf("%d",&a[i]);}
pai(a, n);
return 0;
}
void pai(int a[],int n)
{
int i,j;
for(i=0;i<n;i++)
 {for(j=i+1;a[i]<=a[j]&&j<=n;j++)
    {if(a[i]>a[j])
       break;
     else if(j==n)
      printf("%d ", a[i]);}}
}
