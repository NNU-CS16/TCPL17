#include<stdio.h>
int main()
{
   int m,n,a,b,c;
   printf("m =");
   scanf("%d",&m);
  
   if(m<=99||m>=1000)
   {
      printf("Please input a right m.\n");
      return 1;
   }
   else
   {
      a=m/100;b=(m-a*100)/10;c=(m-a*100-b*10);
      printf("n的百位是%d,n的十位是%d，n的个位是%d\n",a,b,c);
   } 


   if(c==0&&b!=0)
   {
      n=b*10+a;
      printf("m按逆序的数字是%d\n",n);
   } 
   else if(c==0&&b==0)
   {
      n=a;
      printf("m按逆序的数字是%d\n",n);
   } 
   else
   {
      n=c*100+b*10+a;
      printf("m按逆序的数字是%d\n",n);
   }
   
   return 0;
}

