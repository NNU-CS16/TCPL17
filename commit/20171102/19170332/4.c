#include<stdio.h>
int count1_in_bin(int n)

{
  int b,sum=0;
   if(n>=0)
   {
     b=n%10;{
     if(b=1)
       sum=sum+1;
     else sum=sum+0;
    }
      n=n/10; 
   }
  printf("n中1的个数为：%d\n",sum);
  return 0;
}

int main()
{
int n;
scanf("%d",&n);
count1_in_bin(n);
return 0;
}    
