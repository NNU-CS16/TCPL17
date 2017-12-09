#include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  int i,j;
  j=i;i=1;
  int sum=1;
  for(i=1;i<n;i++){
    for(j=i;j>=1;j--)
       { 
          if(j%2!=0&&i%j==0)
          sum=sum+j;
       }
    }
  printf("%d\n",sum);
return 0;
}
      
