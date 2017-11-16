#include<stdio.h>
int count1_in_bin(int n)
{
    int i=0,j=0;
    while(n)
    {
      n=n/2,j=n%2;
      if(j==1)
      i++;
    }
}
    int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",count1_in_bin(n));
    return 0;
}
    
  
