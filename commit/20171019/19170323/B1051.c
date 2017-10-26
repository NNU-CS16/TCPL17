#include <stdio.h>
int add(int x, int y)
{
  int m=0,n=1,count=0;
  do{
     if(x%10==y)
      {count++;
       m+=y*n;
       x=x/10;
       n*=10;}
     else if(x%10!=y)
      {x=x/10;}
    }while(x>0);
   return m;
}
  
int main()
{
  int A,Da,B,Db,i,j;
  printf("please input : ");
  scanf("%d%d%d%d",&A,&Da,&B,&Db);
  i=add(A,Da);
  j=add(B,Db);
  printf("%d\n",i+j);
 
  return 0;
}
