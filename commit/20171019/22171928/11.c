#include<stdio.h> 
void fun(int a[][34],int n) 
{ 
int i,j; 
for(i=0;i<n;i++) 
for(j=0;j<=i;j++) 
{ 
if(i==j) 
  a[i][j]=1; 
else if(j==0) 
  a[i][j]=1; 
else 
  a[i][j]=a[i-1][j-1]+a[i-1][j]; 
} 
} 
int main() 
{ 
int i,j,k,n; 
int a[34][34]; 
k=1; 
 while(scanf("%d",&n)==1)
{ 
 fun(a,n); 
   printf("Case %d:\n",k++); 
  for(i=0;i<n;i++) 
{ 
  for (j = 0; j < n - i; j ++) 
   printf(" "); 
  for(j=0;j<=i;j++) 
{ 
if(j==i) 
   printf("%d",a[i][j]); 
else 
   printf("%d ",a[i][j]); 
} 
   printf("\n"); 
} 
   printf("\n"); 
} 
return 0; 
}
