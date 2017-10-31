#include<stdio.h>
#include<math.h>
int gets(int a,int b)
{
   int m,i,s=0;
   while(a/10>=1)
   {
     m=a%10;
     if(m==b)
    {
     s=b+10*s;
   
     a=a-m;
     a=a/10;} 
   else{  i=m; a=a-i; a=a/10;}
   }
   if (a==b) { s=s*10+b; return s;} 
   else return s;
}

int main()
{
   int DA,DB;
   int  A,B;
   int PA,PB;
   printf("input A,DA,B,DB:"); 
   scanf("%d %d %d %d",&A,&DA,&B,&DB); 
   
   PA=gets(A,DA);
  
   PB=gets(B,DB);

   printf("%d\n",PA+PB);
   return 0;
}
