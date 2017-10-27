#include<stdio.h>
int main()
{
    int i,j,s,n=9;
    for(i=1;1<=9;i++)
       for(j=1;j<=9;j++,n=n-1)
       {
          s=i*j;
           if(j==n)
           printf("\n");
           printf("%d*%d=%d",j,i,s);
       }
    return 0;
}
