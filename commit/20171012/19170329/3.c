#include<stdio.h>
int main()
{ 
     int a,n,i=1,s=0;
     scanf("%d%d",&a,&n);
     do
{
    
     s=a+s;
     a=a+10*a;
     i++;
}
     while(i<=n);
     printf("s=%d\n",s);
     return 0;
}
