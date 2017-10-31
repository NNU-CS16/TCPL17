#include<stdio.h>
 int main()

 {
     int n,i;
     printf("请输入一个n(n>3):");
     scanf("%d",&n);
     if (n%2==0)
       printf("%d不是一个素数\n",n);
       else
       {
        for(i=2;i<n;i++)
        if(n%i==0)
         break;
        if(i<n)
         printf("%d不是一个素数\n",n);
        else
         printf("%d是一个素数\n",n);
       }
    return 0;
 }

