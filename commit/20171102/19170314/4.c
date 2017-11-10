#include<stdio.h>
#include<stdlib.h>
int count1_in_bin(int n)
{

   int i,j,m=1,k=0;
   char arr[100];
   if(n%2==0)
   {
      printf("1");}
   while(j!=0)
   {
       i=n%2;
       j=n/2;
       arr[m]=i;
       m++;
   } 
   if(m>0)
   {
       i=arr[--m];   


   if(arr[m]==1)
       k++;
       m--;
   }
   printf("\n");
   printf("%d",k);
}
int main()
{
   int n;
   scanf("%d",&n);
   count1_in_bin(n);



    return 0;
} 
   









     

     
