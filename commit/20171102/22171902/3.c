#include<stdio.h> 
 int is_pow2(int n);
int main()
{
int n=0;    
 scanf("%d",&n);

 printf("%d", is_pow2(n));

   return 0;
}

int is_pow2(int n)
{
	int flag;
	
    if(n==1)
    return flag;
    else
  {
      while(n!=1)
    {
    if(n%2==1)
    {
     flag=-1;
      break;
    }
    else
    n=n/2;
    flag=0;
    }
     return flag;
  }
}



