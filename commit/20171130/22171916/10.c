#include<stdio.h>
int main()
{
 int arr[100];
 int n,count=0;
 printf("请输入n:");
 scanf("%d",&n);
 int m;
 for (m=0; m<n; m++)
  scanf("%d",&arr[m]);
 int i,j;
 for (i=0;i<n-1;i++)
  {
    for (j=i+1;j<n;j++)
     { 
     if (arr[i] > arr[j])
        count++;
     }
  }
 printf("%d\n",count);
 return 0;
}

